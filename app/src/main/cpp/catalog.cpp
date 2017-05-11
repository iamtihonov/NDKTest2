#include "catalog.h"

using namespace std;

//language and genre not used now
std::list<int> *Catalog::find(const int genreFilter){
    std::list<int>* searchResults = new std::list<int>();
    searchResults->push_back(1);
    searchResults->push_back(3);
    searchResults->push_back(5);
    return searchResults;
}
