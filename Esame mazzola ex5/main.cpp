#include <iostream>
#include "Document.h"
#include "Image.h"
#include "Video.h"
#include "Playlist.h"

int main() {
    Playlist * pp1= new Playlist();
    Document * pi1= new Image("img.1", "music1", 10,20, 5);
    Document * pv1= new Video("video.1", "music2", 20, 30, 5 , 4);
    pp1->add(pi1);
    pp1->add(pv1);
    pp1->play();
}
