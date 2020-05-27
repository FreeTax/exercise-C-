//
// Created by Francesco Mazzola on 27/05/2020.
//

#include "Data.h"
#include <string>


Data::Data(int day, int month, int year){
    this->month=month;
    this->day=day;
    this->year=year;
}

std::string Data::GetData() {
    return std::to_string(day)+ " " + std::to_string(month)+ " " + std::to_string(year);
}

bool Data::validate() {
    if(month >12 || day >31)
        return false;
    else
        if((month== 11 || month==4 || month==6 || month==9)&& day>30)
            return false;
        else
            return true;
}