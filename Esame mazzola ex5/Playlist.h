//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESAME_MAZZOLA_EX5_PLAYLIST_H
#define ESAME_MAZZOLA_EX5_PLAYLIST_H
#include "iostream"
#include "list"
#include "Document.h"

class Playlist {
public:
    Playlist();
    virtual ~Playlist();
    void play();
    void add(Document * d);
    void remove(Document * d);

private:
    std::list<Document *> Element;


};


#endif //ESAME_MAZZOLA_EX5_PLAYLIST_H
