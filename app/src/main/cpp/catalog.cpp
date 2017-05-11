#include "catalog.h"

using namespace std;

std::list<int>* Catalog::getAllForGenre(const int& genre) const
{
    return new std::list<int>;
}

//language and genre not used now
std::list<int> *Catalog::find(const std::string &findIt, std::string language,
                           const int filterBy,  const int genreFilter){
    std::list<int>* searchResults = new std::list<int>();
    searchResults->push_back(8099);
    searchResults->push_back(69376);
    searchResults->push_back(74837);
    return searchResults;
}

std::list<int> *Catalog::findPerformer(const std::string &performer)
{
    list<int>* searchResults = new list<int>;
    searchResults->push_back(72875);
    searchResults->push_back(11938);
    searchResults->push_back(11357);
    return searchResults;
}

bool Catalog::loadFromBinary(const std::string& filename)
{
    return true;
}

//int Catalog::doIt(std::set<int> &results, RadixTree &haystack, const string &nidle, bool strictly)
//{
//
//}
