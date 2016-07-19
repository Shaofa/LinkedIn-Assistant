#include "account.h"
#include "global.h"

AccountService::AccountService()
{
    logger = el::Loggers::getLogger("account");
    this->timerToShare = nullptr;
    gState = OFFLINE;
}

bool AccountService::prepareLogin()
{
    if(gState != State::OFFLINE){
        logger->warn("login failed,account state is not OFFLINE.");
        return false;
    }
    logger->info("prepare to login...");
    gBrowser->webViewLoadLoginPage();
    gState = State::PREPARE_LOGIN;
    return true;
}

bool AccountService::prepareLogout()
{
    if(gState == OFFLINE){
        logger->warn("logout failed,account state is OFFLINE");
        return false;
    }
    logger->info("prepare to logout...");
    gBrowser->webViewLoadWelcomePage();
    gState = PREPARELOGOUT;
    return true;
}

bool AccountService::login()
{
    logger->info("filling login form...");
    /* 自动填写登录表单并自动提交表单 */
    QWebFrame* frame = gBrowser->mainFrame();
    frame->evaluateJavaScript("$('input#session_key-login').val('changche_master@sina.com')");
    frame->evaluateJavaScript("$('input#session_password-login').val('changche')");
    frame->evaluateJavaScript("$('input#btn-primary').click();");
    logger->info("submit login form...");
    return true;
}

bool AccountService::logout()
{
    /* 自动点击登出 */
    logger->info("logout...");
    gState = OFFLINE;
    return true;
}

void AccountService::successLogin()
{
    logger->info("finished login.");
}

void AccountService::successLogout()
{
    gState = OFFLINE;
    logger->info("finished logout.");
}

bool AccountService::setTimerToShare()
{
    if(this->timerToShare == nullptr){
        timerToShare = new QTimer(this);
        connect(timerToShare, SIGNAL(timeout()), this, SLOT(onTimerToShare()));
    }
    if(this->timerToShare->isActive()){
        this->timerToShare->stop();
        logger->info("stop timer: finish auto sharing.");
    }
    else {
        this->timerToShare->start(10000);
        logger->info("start timer: start auto sharing.");
    }
    return this->timerToShare->isActive();
}

void AccountService::onTimerToShare()
{
    logger->info("time out to share.");
    QString dateTimeStr = QDateTime::currentDateTime().toString(Qt::ISODate);
    QWebFrame* frame = gBrowser->mainFrame();
    frame->findFirstElement("menu button[class=\"share spot\"]").evaluateJavaScript("this.click();");
    frame->findFirstElement("textarea[id=\"postmodule-text\"]").evaluateJavaScript(QString("this.value=\"%1\"").arg(dateTimeStr));
    frame->findFirstElement("div button[class=\"postmodule-submit\"]").evaluateJavaScript("this.click();");
}

