#include "search.h"
#include "global.h"

SearchService::SearchService()
{
    logger = el::Loggers::getLogger("search");
}


bool SearchService::search()
{
    if(gState != State::PREPARE_SEARCH){
        logger->warn("search failed: State is not PREPARESEARCH");
        return false;
    }
    logger->info("search...");
    return true;
}
