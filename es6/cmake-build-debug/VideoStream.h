//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESERCIZIO_6_VIDEOSTREAM_H
#define ESERCIZIO_6_VIDEOSTREAM_H

#include <iostream>

class VideoStream {
public:
    VideoStream(std::string nome, std::string t);

    void play();

private:
    std::string name;
    std::string type;

};


#endif //ESERCIZIO_6_VIDEOSTREAM_H
