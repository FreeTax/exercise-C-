//
// Created by Francesco Mazzola on 16/06/2020.
//

#ifndef FS4_FILE_H
#define FS4_FILE_H

#include "string"
#include "Date.h"

class File {
public:
    File(const std::string name, const std:: string extension, const int day, const int month, const int year, const int hour, const int minute, const int second );

    File(File* f);
    const std::string getName() const;

    friend bool operator <=(const File & f1, const File & f2 );
    void setName(const std::string &name);

    const std::string getExtension() const;

    void setExtension(const std::string &extension);



    void setCreationDate(const int day, const int month, const int year, const int hour, const int minute, const int second);

    void setLastModify(const int day, const int month, const int year, const int hour, const int minute, const int second);

    void setlastAcces(const int day, const int month, const int year, const int hour, const int minute, const int second);
private:
    std::string name;
    std::string extension;
    std::unique_ptr<Date> creationDate;
    std::unique_ptr<Date> lastModify;
public:
    const std::unique_ptr<Date> &getCreationDate() const;

private:
    std::unique_ptr<Date>lastAcces;
};


#endif //FS4_FILE_H
