#ifndef MYLIB_H_INCLUDED
#define MYLIB_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdio>
#include <bits/stdc++.h>
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
using std::nth_element;

struct studentas{
    string var,pav;
    vector <int> paz;
    int egz;
    float rez_vid;
    float rez_med;
};

void ivedimas(studentas &Temp);
void galutinis_vid(studentas &Temp);
void isvedimas(studentas &Temp,float galutinis);
void mediana(studentas &Temp);
void galutinis_med(studentas &Temp);


#endif // MYLIB_H_INCLUDED
