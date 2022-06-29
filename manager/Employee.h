#pragma once
#include<iostream>
using namespace std;
class Employee {
public:
    Employee() {
        itscode++;
        //cout<<"used---------"<<endl;
    }
    char itsname[5] = "XXXX";
    static int itscode;
    float Monthly_salary = 0;
    virtual void displayStatus() {}
    virtual void save() {}
    virtual void pay() = 0;
};

