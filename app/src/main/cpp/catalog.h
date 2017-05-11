#ifndef DBADAPTER_H
#define DBADAPTER_H

#include <list>
#include <set>
#include <map>
#include <unordered_map>
#define DISABLE_SEARCH_BY_WORD
//struct SongInfo
//{
//    std::string code;

//    // format for more informative alphabet ordering
//    // example: "the performer" -> "performer, the"
//    std::string performerSearch;
//    std::string performer;
//    std::string title;
//    int duration;
//    bool hasBack;
//    int format;
//    bool hasClip;

//    int temp;
//    std::string pitch;
//    std::string language;

//    inline bool isValid() const {
//        return ! (code.isEmpty()
//                  || performerSearch.isEmpty()
//                  || title.isEmpty());
//    }
//};

class Catalog
{

public:
    enum Genre {
        GenreAll =      0,
        GenrePop =      1,
        GenreShanson =  (1<<1),
        GenreDuets =    (1<<2),
        GenreRock =     (1<<4),
        GenreMilitary = (1<<5),
        GenreChildren = (1<<6),
        GenreRomances = (1<<7),
        GenreNationals =(1<<8),
        GenreMovies =   (1<<10),
        GenreRetro =    (1<<11),
        GenreVideoke =  (1<<13)
    };

    enum Filter {
        NoFilter,
        FilterByTitle,
        FilterByPerformer
    };

public:

    //    QSharedPointer<Songs> getSongs() const;
        std::list<int> *getAllForGenre(const int &genre) const;

public : //slots
    std::list<int> *find(const std::string &findIt, std::string language,
                         const int filterBy, const int genreFilter = 0);
    //XXX
    std::list<int> *findPerformer(const std::string &performer);
    bool loadFromBinary(const std::string &filename);


private:
//    int doIt(std::set<int>& results, RadixTree &haystack, const std::string& nidle, bool strictly);
    void sortByLanguage(std::list<int> *searchResults, std::string &language);
//ToDo:
//private:
public:

    std::unordered_map<int, std::list<int> > m_genresTable;


//    RadixTree m_titles;
//    RadixTree m_performers;
//
//    RadixTree m_performersTags;
//    RadixTree m_titlesTags;
//    RadixTree m_textTags;

    //faster access by index
//    std::unordered_map <int, SongInfo> m_songs;
};


#endif // DBADAPTER_H
