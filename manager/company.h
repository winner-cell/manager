#pragma once
#include<iostream>
#include"Manager.h"
#include"Technician.h"
#include"Salesman.h"
#include"Salesmanager.h"
using namespace std;
#define MA 2
#define TE 2
#define SAL 3
#define SA 2

class company 
{
public:
    company() {}
    const int Ma = MA;
    const int Te = TE;
    const int Sal = SAL;
    const int Sa = SA;
    string ma_save_path = "D:/Users/Desktop/c_ims/Manager/";
    string te_save_path = "D:/Users/Desktop/c_ims/Technician/";
    string sal_save_path = "D:/Users/Desktop/c_ims/Salesmanager/";
    string sa_save_path = "D:/Users/Desktop/c_ims/Salesman/";

    int all_e = 0;

    int salemanager_salary = 0;

    Manager ma[MA];
    Technician te[TE];
    Salesmanager sal[SAL];
    Salesman sa[SA];
    void get_all_salemanager_salary();
    void show_all_employee_info();
    void save_all_info();
    void find_Manager(int code);
    void find_Technician(int code);
    void find_Salesmanager(int code);
    void find_Salesman(int code);
    void add_Manager(int itscode, float fixed_salary);
    void add_Technician(int itscode, int work_time, int per_hour_money);
    //void add_Salesmanager(int itscode,int  Monthly_salary,);
    void add_Salesman(int itscode, float sale_room, float Sales_commission);
    void delete_em(int code);
};