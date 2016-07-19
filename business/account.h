#ifndef BUSINESS_H
#define BUSINESS_H

#include <QObject>
#include <QtSql/QSqlTableModel>
#include <QTimer>
#include <QWebView>
#include <QWebFrame>
#include <QWebElement>
#include <QWebElementCollection>
#include "logging/easylogging++.h"

class AccountService : public QObject
{
public:
    AccountService();

private:
    el::Logger* logger;
    QTimer* timerToShare;
public:
    bool login();
    bool logout();
    bool setTimerToShare();
    void onTimerToShare(void);
};

#endif // BUSINESS_H
