//
// Created by Francesco Mazzola on 18/06/2020.
//

#ifndef ESAME_MAZZOLA_EX5_DOCUMENT_H
#define ESAME_MAZZOLA_EX5_DOCUMENT_H

#include "iostream"

class Document {
public:
    Document(std::string n, std::string m, int h, int w, int t);

    virtual void play()=0;

    void playmusic();

    const std::string &getMusicRoot() const;

    void setMusicRoot(const std::string &musicRoot);

    int getHight() const;

    void setHight(int hight);

    int getTime() const;

    virtual ~Document()= default;

    void setTime(int time);

    const std::string &getName() const;

    void setName(const std::string &name);

private:
    std::string name;
    std::string music_root;
    int hight;
    int width;
    int time;
};


#endif //ESAME_MAZZOLA_EX5_DOCUMENT_H
