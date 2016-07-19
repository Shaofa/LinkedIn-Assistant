#include "browser.h"
#include "ui_mainwindow.h"
#include <ctime>
#include <QMessageBox>
#include <QWebFrame>
#include <QWebElement>
#include <QWebElementCollection>
#include "global.h"


Browser::Browser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    logger = el::Loggers::getLogger("browser");
    ui->setupUi(this);
    this->setWindowTitle(QString(AppConfigure::app_name) + QString(AppConfigure::app_version));

    timer = new QTimer(this);

    ui->tabWidget->setCurrentIndex(0);
    ui->statusBar->addPermanentWidget(ui->labelStatusPermanentMessage);
    ui->statusBar->addWidget(ui->labelStatusMessage);
    ui->progressBar->setHidden(true);

    connect(ui->webView, SIGNAL(loadStarted()), this, SLOT(onWebViewLoadStarted()));
    connect(ui->webView, SIGNAL(loadProgress(int)), this, SLOT(onWebViewLoadProgress(int)));
    connect(ui->webView, SIGNAL(loadFinished(bool)), this, SLOT(onWebViewLoadFinished(bool)));
    connect(ui->webView, SIGNAL(titleChanged(QString)), this, SLOT(onWebViewTitleChanged(QString)));
    connect(ui->buttonLogin, SIGNAL(clicked()), this, SLOT(onButtonLoginClicked()));
    connect(ui->buttonShare, SIGNAL(clicked()), this, SLOT(onButtonShareClicked()));
    connect(ui->buttonLogout, SIGNAL(clicked()), this, SLOT(onButtonLogoutClicked()));
    connect(ui->buttonAdd, SIGNAL(clicked()), this, SLOT(onButtonAddClicked()));
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimerTimeout()));

    QFile file;
    file.setFileName("jquery.min.js");
    file.open(QIODevice::ReadOnly);
    jQuery = file.readAll();
    file.close();

    timer->start(1000);
    this->webViewLoadWelcomePage();
}

Browser::~Browser()
{
    delete ui;
}

void Browser::onButtonLoginClicked()
{
    logger->info("clicked login button.");
    if(!gAccountService->prepareLogin()) {
        logger->warn("login failed.");
        QMessageBox::information(NULL,"info","登录失败!",QMessageBox::Ok);
    }
    else{
        ui->tabWidget->setCurrentIndex(0);
        ui->buttonLogin->setDisabled(true);
        ui->buttonLogout->setEnabled(true);
    }
}

void Browser::onButtonLogoutClicked()
{
    logger->info("clicked logout button.");
    if(!gAccountService->prepareLogout()){
        logger->warn("logout failed.");
        QMessageBox::information(NULL,"info","注销失败!",QMessageBox::Ok);
    }
    else{
        ui->buttonLogin->setEnabled(true);
        ui->buttonLogout->setDisabled(true);
    }
}

void Browser::onButtonShareClicked()
{
    logger->info("clicked share button.");
    bool isSharing = gAccountService->setTimerToShare();
}

void Browser::onButtonAddClicked()
{
    logger->info("clicked add button.");
    if(!gSearchService->prepareSearch()){
        logger->warn("prepare search failed.");
        QMessageBox::information(NULL,"info","搜索失败",QMessageBox::Ok);
    }
}

void Browser::onTimerTimeout()
{
    static QTime time;
    static bool isStartTime = true;
    if(isStartTime){
        isStartTime = false;
        time.start();
    }
    QTime diffTime = QTime::fromMSecsSinceStartOfDay(time.elapsed());
    ui->labelStatusPermanentMessage->setText(diffTime.toString());
}

void Browser::onWebViewLoadStarted()
{
    ui->progressBar->setValue(1);
    ui->progressBar->setHidden(false);
    ui->labelStatusMessage->setText("Start loading...");
}

void Browser::onWebViewLoadFinished(bool ok)
{
    logger->info("load finished: %v", ok);
    if(ok)
    {
        logger->info("account state:%v", gState);
        switch (gState) {
        case State::PREPARE_LOGIN:{
            gAccountService->login();
            gState = State::BEGIN_LOGIN;
            ui->buttonLogin->setDisabled(true);
            ui->buttonLogout->setEnabled(true);
            break;
        }
        case State::BEGIN_LOGIN:{
            gAccountService->successLogin();
            gState = State::SUCCESS_LOGIN;
            ui->buttonLogin->setDisabled(true);
            ui->buttonLogout->setEnabled(true);
            break;
        }
        case State::PREPARELOGOUT:{
            gAccountService->logout();
            ui->buttonLogin->setEnabled(true);
            ui->buttonLogout->setDisabled(true);
            break;
        }
        case State::LOGIN:{
            gAccountService->successLogin();
            ui->buttonLogin->setDisabled(true);
            ui->buttonLogout->setEnabled(true);
            break;
        }
        case State::PREPARESEARCH:{
            break;
        }
        case State::LOGOUT:{
            gAccountService->successLogout();
            ui->buttonLogin->setEnabled(true);
            ui->buttonLogout->setDisabled(true);
            break;
        }
        default:
            break;
        }
    }
    ui->webView->page()->mainFrame()->evaluateJavaScript(jQuery);
    ui->progressBar->setHidden(true);
}

void Browser::onWebViewLoadProgress(int progress)
{
    ui->progressBar->setValue(progress);
    ui->progressBar->setHidden(false);
    QString url = ui->webView->url().url();
    ui->labelStatusMessage->setText(url.left(50) + (url.length()>50 ? "..." : ""));
}

void Browser::onWebViewTitleChanged(const QString &title)
{
    QString shortTitle = title.left(10);
    if(title.length() > 10)
        shortTitle += "...";
    ui->tabWidget->setTabText(0, shortTitle);
}

void Browser::webViewLoadLoginPage()
{
    ui->webView->setUrl(QUrl(AppConfigure::app_url_login));
    logger->info("loading login page...");
}

void Browser::webViewLoadWelcomePage()
{
    ui->webView->setUrl(QUrl(AppConfigure::app_url_welcome));
    logger->info("loading welcome page...");
}


void Browser::webViewLoadHomePage()
{
    logger->info("loading home page...");
}

void Browser::webViewLoadSearchPage()
{
    ui->webView->setUrl(QUrl(AppConfigure::app_url_search));
    logger->info("loading search page....");
}

QWebFrame *Browser::mainFrame()
{
    return ui->webView->page()->mainFrame();
}



