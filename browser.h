#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWebKit/QtWebKit>
#include <QProgressBar>
#include <QLabel>
#include "business/account.h"
#include "config/configurations.h"
#include "logging/easylogging++.h"

namespace Ui {
class MainWindow;
}

class Browser : public QMainWindow
{
    Q_OBJECT

public:
    explicit Browser(QWidget *parent = 0);
    ~Browser();

public:
    void webViewLoadWelcomePage();
    void webViewLoadLoginPage();
    void webViewLoadHomePage();
    void webViewLoadSearchPage();
    QWebFrame* mainFrame();

private slots:
    void onWebViewLoadStarted();
    void onWebViewLoadFinished(bool ok);
    void onWebViewLoadProgress(int progress);
    void onWebViewTitleChanged(const QString & title);
    void onButtonLoginClicked();
    void onButtonLogoutClicked();
    void onButtonShareClicked();
    void onButtonAddClicked();
    void onTimerTimeout();

private:
    Ui::MainWindow *ui;
    QTimer* timer;
    QString jQuery;
private:
    el::Logger* logger;
};

#endif // MAINWINDOW_H
