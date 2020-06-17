//
// Created by Francesco Mazzola on 16/06/2020.
//

#include "File.h"

//explit costructor
File::File(const std::string name, const std::string extension, const int day, const int month, const int year, const int hour, const int minute, const int second) {
    setCreationDate(day, month, year, hour, minute, second);
    setlastAcces(day, month, year, hour, minute, second);
    setLastModify(day, month, year, hour, minute, second);
    setName(name);
    setExtension(extension);

}



const std::string File::getName() const {
    return name;
}

void File::setName(const std::string &name) {
    File::name = name;
}

const std::string File::getExtension() const {
    return extension;
}

void File::setExtension(const std::string &extension) {
    File::extension = extension;
}

void File::setCreationDate(const int day, const int month, const int year, const int hour, const int minute, const int second) {
    creationDate->setDay(day);
    creationDate->setHour(hour);
    creationDate->setMinute(minute);
    creationDate->setMonth(month);
    creationDate->setSecond(second);
    creationDate->setYear(year);
}

void File::setLastModify(const int day, const int month, const int year, const int hour, const int minute, const int second) {
    lastModify->setDay(day);
    lastModify->setHour(hour);
    lastModify->setMinute(minute);
    lastModify->setMonth(month);
    lastModify->setSecond(second);
    lastModify->setYear(year);
}

void File::setlastAcces(const int day, const int month, const int year, const int hour, const int minute, const int second) {
    lastAcces->setDay(day);
    lastAcces->setHour(hour);
    lastAcces->setMinute(minute);
    lastAcces->setMonth(month);
    lastAcces->setSecond(second);
    lastAcces->setYear(year);
}

bool operator<=(const File &f1, const File &f2) {
    if(f1.getCreationDate()->getYear()<f2.getCreationDate()->getYear())
    return false;
    else if (f1.getCreationDate()->getYear()>f2.getCreationDate()->getYear())
        return true;
    else{
        if(f1.getCreationDate()->getMonth()>f2.getCreationDate()->getMonth())
            return false;
        else if( f1.getCreationDate()->getMonth()<f2.getCreationDate()->getMonth())
            return true;
        else{
            if(f1.getCreationDate()->getDay()>f2.getCreationDate()->getDay())
                return false;
            else if(f1.getCreationDate()->getDay()<f2.getCreationDate()->getDay())
                return true;
            else{
                if(f1.getCreationDate()->getHour()>f2.getCreationDate()->getHour())
                    return false;
                else if(f1.getCreationDate()->getHour()<f2.getCreationDate()->getHour())
                    return true;
                else{
                    if(f1.getCreationDate()->getMinute()>f2.getCreationDate()->getMinute())
                        return false;
                    else if(f1.getCreationDate()->getMinute()<f2.getCreationDate()->getMinute())
                        return true;
                    else{
                        if(f1.getCreationDate()->getSecond()>f2.getCreationDate()->getSecond())
                            return false;
                        else
                            return true;
                    }
                }
            }
        }
    }
}

const std::unique_ptr<Date> &File::getCreationDate() const {
    return creationDate;
}

File::File(File* f) {

}


