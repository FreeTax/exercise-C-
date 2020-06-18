//
// Created by Francesco Mazzola on 18/06/2020.
//

#include "Document.h"
#include "iostream"

Document::Document(std::string n, std::string m, int h, int w, int t) : name(n), music_root(m), hight(h), width(w),
                                                                        time(t) {

}

void Document::playmusic() {
    if (music_root.empty() == false) {
        std::cout << "i'm playing music" << music_root << std::endl;
    }
}


const std::string &Document::getMusicRoot() const {
    return music_root;
}

void Document::setMusicRoot(const std::string &musicRoot) {
    music_root = musicRoot;
}

int Document::getHight() const {
    return hight;
}

void Document::setHight(int hight) {
    Document::hight = hight;
}

int Document::getTime() const {
    return time;
}

void Document::setTime(int time) {
    Document::time = time;
}

const std::string &Document::getName() const {
    return name;
}

void Document::setName(const std::string &name) {
    Document::name = name;
}



