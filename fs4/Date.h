//
// Created by Francesco Mazzola on 16/06/2020.
//

#ifndef FS4_DATE_H
#define FS4_DATE_H


class Date {
public:
    explicit Date( const int day, const int month, const int year, const int hour, const int minute, const int second);
    ~Date();
    int getDay() const;

    void setDay(int day);

    int getMonth() const;

    void setMonth(int month);

    int getYear() const;

    void setYear(int year);

    int getHour() const;

    void setHour(int hour);

    int getMinute() const;

    void setMinute(int minute);

    int getSecond() const;

    void setSecond(int second);

private:
    int day;
    int month;
    int year;
    int hour;
    int minute;
    int second;
};


#endif //FS4_DATE_H
