#include "search.h"
#include "global.h"

SearchService::SearchService()
{
    logger = el::Loggers::getLogger("search");
}

bool SearchService::prepareSearch()
{
    if(gState != State::ONLINE) {
        logger->warn("prepareSearch failed: State is not ONLINE!");
        return false;
    }
    gState = State::PREPARESEARCH;
    logger->info("prepare to search...");
    gBrowser->webViewLoadSearchPage();
    return true;
}

bool SearchService::search()
{
    if(gState != State::PREPARESEARCH){
        logger->warn("search failed: State is not PREPARESEARCH");
        return false;
    }
    gState = State::SEARCH;
    logger->info("search...");
    return true;
}
