#include <QApplication>
#include <QtWebKit>
#include <QWebView>
#include "global.h"

#define ELPP_DEFAULT_LOG_FILE (AppConfigure::app_log_filename)
#if !defined(ELPP_DEFAULT_LOGGER)
    #define ELPP_DEFAULT_LOGGER "sys"
#endif
#include "logging/easylogging++.h"
INITIALIZE_EASYLOGGINGPP
static void initializeLoggingSystem(){
    el::Configurations defaultConf;
    defaultConf.setGlobally(el::ConfigurationType::Enabled, std::string("true"));
    defaultConf.setGlobally(el::ConfigurationType::ToFile, std::string("true"));
    defaultConf.setGlobally(el::ConfigurationType::ToStandardOutput, std::string("true"));
    defaultConf.setGlobally(el::ConfigurationType::MillisecondsWidth, std::string("3"));
    defaultConf.setGlobally(el::ConfigurationType::PerformanceTracking, std::string("true"));
    defaultConf.setGlobally(el::ConfigurationType::MaxLogFileSize, std::string("2097152"));
    defaultConf.setGlobally(el::ConfigurationType::LogFlushThreshold, std::string("0"));
    defaultConf.setGlobally(el::ConfigurationType::Format, std::string("%level [%datetime{%Y-%M-%d %h:%m:%s}][%logger][%func][%loc]: %msg"));
    defaultConf.set(el::Level::Info, el::ConfigurationType::Format, std::string("%level [%datetime{%Y-%M-%d %h:%m:%s}][%logger]: %msg"));
    el::Loggers::getLogger("sys");
    el::Loggers::getLogger("ui");
    el::Loggers::getLogger("webview");
    el::Loggers::getLogger("account");
    el::Loggers::getLogger("search");
    el::Loggers::reconfigureAllLoggers(defaultConf);
    el::Loggers::getLogger("sys")->info("finish configuring logging system.");
}


int main(int argc, char *argv[])
{
    initializeLoggingSystem();
    el::Loggers::getLogger("sys")->info("application starting...");

    QApplication a(argc, argv);
    gBrowser = new Browser();
    gAccountService = new AccountService();
    gSearchService = new SearchService();
    gBrowser->show();

    return a.exec();
}
