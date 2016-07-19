#ifndef SEARCHSERVICE_H
#define SEARCHSERVICE_H

#include <QObject>
#include "logging/easylogging++.h"

class SearchService : public QObject
{
public:
    SearchService();
    el::Logger* logger;

    bool search();
};

#endif // SEARCHSERVICE_H
