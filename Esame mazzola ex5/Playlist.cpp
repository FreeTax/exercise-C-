//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "Playlist.h"

Playlist::Playlist() {}

Playlist::~Playlist() {

}

void Playlist::play() {
    while (true){
        for(auto iter:Element)
            iter->play();
    }
}

void Playlist::remove(Document * d) {
    Element.remove(d);
}

void Playlist::add(Document * d) {
    Element.push_back(d);
}
