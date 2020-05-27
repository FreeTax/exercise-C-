//
// Created by Francesco Mazzola on 27/05/2020.
//

#ifndef EX2_DATA_H
#define EX2_DATA_H

#include <iostream>



class Data {
private:
    int day, month, year;
public:
    Data(int day, int month, int year);
    std::string GetData();
    bool validate();
    };


#endif //EX2_DATA_H
