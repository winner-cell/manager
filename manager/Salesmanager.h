#pragma once
#include"Manager.h"
#include"Salesman.h"
#include<iostream>
using namespace std;

class Salesmanager:public Manager,public Salesman
{
public:
    Salesmanager() { code = itscode; }
    int code;
    float fixed_salary = 5000;
    float saleroom = 10000;
    float team_saleroom = 0;
    float Sales_commission = 0.005;
    void pay();
    void displayStatus();
    void save(string save_path);
};