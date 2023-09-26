#ifndef MYLIB_H_INCLUDED
#define MYLIB_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdio>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::fixed;
using std::setw;
using std::left;
using std::right;
using std::setprecision;

struct studentas{
    string var,pav;
    vector <int> paz;
    int egz;
    float rez;
};

void ivedimas(studentas &Temp);
void vidurkis(studentas &Temp);
void isvedimas(studentas &Temp);


#endif // MYLIB_H_INCLUDED
