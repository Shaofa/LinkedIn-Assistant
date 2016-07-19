#ifndef MAIN_H
#define MAIN_H

#include "browser.h"
#include "business/account.h"
#include "business/search.h"
#include "config/configurations.h"

enum State
{
    /* on/off line */
    ONLINE,
    OFFLINE,

    /* login */
    PREPARE_LOGIN,
    BEGIN_LOGIN,
    SUCCESS_LOGIN,
    FAILED_LOGIN,

    /* logout */
    PREPARE_LOGOUT,
    BEGIN_LOGOUT,
    SUCCESS_LOGOUT,
    FAILED_LOGOUT,

    /* search */
    PREPARE_SEARCH,
    BEGIN_SEARCH,
    FAILED_SEARCH,
    SUCCESS_SEARCH
};

extern State gState;
extern Browser* gBrowser;
extern AccountService* gAccountService;
extern SearchService* gSearchService;

#endif // MAIN_H

