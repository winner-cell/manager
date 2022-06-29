#pragma once
#include"Employee.h"
#include<iostream>
using namespace std;

class Manager:virtual public Employee 
{
public:
    Manager() { code = itscode; }
    Manager(int itscode, float fixed_s) :code(itscode), fixed_salary(fixed_s) {

    }
    int code;
    float fixed_salary = 8000;
    void pay();
    void displayStatus();
    void save(string save_path);

};