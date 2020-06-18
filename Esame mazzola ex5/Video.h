//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESAME_MAZZOLA_EX5_VIDEO_H
#define ESAME_MAZZOLA_EX5_VIDEO_H
#include "Document.h"

class Video : public Document{
public:
    Video(const std::string &n, const std::string &m, int h, int w, int t, int d);
    void play() override;

    virtual ~Video();

    int getDuration() const;

    void setDuration(int duration);

private:
    int duration;
};


#endif //ESAME_MAZZOLA_EX5_VIDEO_H
