#pragma once
#include"Employee.h"
#include<iostream>
using namespace std;
class Salesman:virtual public Employee 
{
public:
    Salesman() { code = itscode; }
    Salesman(int itscode, float sale_r, float Sales_com) :code(itscode), saleroom(sale_r), Sales_commission(Sales_com) {}
    int code;
    float saleroom = 10000;
    float Sales_commission = 0.04;
    void pay();
    void displayStatus();
    void save(string save_path);
};