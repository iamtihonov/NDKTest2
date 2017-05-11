#ifndef DBADAPTER_H
#define DBADAPTER_H

#include <list>
#include <set>
#include <map>
#include <unordered_map>
#define DISABLE_SEARCH_BY_WORD

class Catalog
{

    public : //slots
        std::list<int> *find(const int genreFilter = 0);
};


#endif // DBADAPTER_H
