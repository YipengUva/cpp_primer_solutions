#include <iostream>
#include "chapter6.h"

int fact_yp(int num){
    if(num < 0)
        throw std::runtime_error("input is negative.");

    int out = 1;

    if(num > 0){
        for(int i = 1; i <= num; ++i){
            out *= i;
        }
    }

    return out;
}

double abs_yp(double num){
    if(num > 0)
        return num;
    else
        return -num;
}

int data_generate(){
    static int out = 0;

    return out++;
}
