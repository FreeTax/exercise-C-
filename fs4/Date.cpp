//
// Created by Francesco Mazzola on 16/06/2020.
//

#include "Date.h"

//explicit costructo
Date::Date(const int day, const int month, const int year, const int hour, const int minute, const int second) {
    setYear(year);
    setMonth(month);
    setDay(day);
    setHour(hour);
    setMinute(minute);
    setSecond(second);
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}

int Date::getHour() const {
    return hour;
}

void Date::setHour(int hour) {
    Date::hour = hour;
}

int Date::getMinute() const {
    return minute;
}

void Date::setMinute(int minute) {
    Date::minute = minute;
}

int Date::getSecond() const {
    return second;
}

void Date::setSecond(int second) {
    Date::second = second;
}

Date::~Date() {

}


