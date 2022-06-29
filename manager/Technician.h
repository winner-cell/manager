#pragma once
#include"Employee.h"
#include<iostream>
using namespace std;
class Technician:public Employee 
{
public:
    Technician() { code = itscode; }
    Technician(int itscode, int work_time, int per_hour_m) :code(itscode), worked_time(work_time), per_hour_money(per_hour_m) {}
    int code;
    int worked_time = 100;
    int per_hour_money = 100;
    void pay();
    void displayStatus();
    void save(string save_path);
};