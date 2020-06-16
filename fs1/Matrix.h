//
// Created by Francesco Mazzola on 15/06/2020.
//

#ifndef EXE1FACSIMILE_MATRIX_H
#define EXE1FACSIMILE_MATRIX_H

#include "vector"
#include <memory>

template<typename T>
class Matrix {
public:
    Matrix(int i, int j, T defaultVal = 0) {
        x = i;
        y = j;
        vec = new T[i * j];
        int count = 0;
        while (count <=(i * j)) {
            vec[count] = defaultVal;
            count++;
        }
    }

    bool InsertValue(int i, int j, T val) {
        try {
            if (i < x && j < y) {
                vec[x * (i - 1) + j] = val;
            } else
                throw std::exception();
            return true;
        }
        catch (std::exception &e) {
            std::cerr<<e.what()<<std::endl;
            return false;
        }
    }

    void print() {
        int count=0;
        for (int i = 0; i < x; i++) {

            for (int j = 0; j < y; j++) {
                count++;
                std::cout << vec[count]<<" ";
            }
            std::cout << std::endl;
        }
    }

    ~Matrix() {

    }

private:
    T *vec;
    int x, y;
};


#endif //EXE1FACSIMILE_MATRIX_H
