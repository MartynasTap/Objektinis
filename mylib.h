#pragma once
#ifndef MYLIB_H_INCLUDED
#define MYLIB_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cstdio>
#include <bits/stdc++.h>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <chrono>
#include <random>
#include <list>

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
using std::rand;
using std::srand;
using std::getline;
using std::ifstream;
using std::stringstream;
using std::swap;
using std::list;

struct studentas {
    string var, pav;
    vector <int> paz;
    int egz;
    float rez_vid;
    float rez_med;
};
struct studentasL {
    string var, pav;
    list <int> paz;
    int egz;
    float rez_vid;
    float rez_med;
};

void ivedimas(studentas& Temp);
void galutinis_vid(studentas& Temp);
void isvedimas(studentas& Temp, float galutinis);
void mediana(studentas& Temp);
void galutinis_med(studentas& Temp);
void atsitiktiniai(studentas& Temp);
void readmix(string failas);
void skaitymas(vector<studentas>& Temp, int nd, string failas);
void isvedimas_sufailu(vector<studentas>& Temp);
void iv_ir_tikr(auto& a);
int ar_tinkamas_paz(int a);
int ar_tinkamas_pasirinkimas(int a);
int ar_daugiau0(int a);
void isvedimas_i_faila(vector <studentas>& Temp, string failas);
bool compareElement(studentas& Temp1, studentas& Temp2);
void generavimas(int n, int p, string failas);
void rusiavimas(vector <studentas>& Prad, vector <studentas>& vargsiukai, vector <studentas>& kietekai);
bool compareGalut(studentas& Temp1, studentas& Temp2);

//funkcijos listam
void skaitymasL(list<studentasL>& Temp, int nd, string failas); 
bool compareElementL(studentasL& Temp1, studentasL& Temp2);
void galutinis_vidL(studentasL& Temp);
void galutinis_medL(studentasL& Temp);
void isvedimas_sufailuL(list<studentasL>& Temp);
void isvedimas_i_failaL(list<studentasL>& Temp, string failas);
void atsitiktiniaiL(studentasL& Temp);
void ivedimasL(studentasL& Temp);
void isvedimasL(studentasL& Temp, float galutinis);
#endif // MYLIB_H_INCLUDED
