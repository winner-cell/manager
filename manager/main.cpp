#include <iostream>
#include"Employee.h"
#include"Manager.h"
#include"Technician.h"
#include"Salesman.h"
#include"Salesmanager.h"
#include"company.h"

using namespace std;

int main()
{
    /*
        Manager m1;
        m1.pay();
        m1.displayStatus();
        Technician t1;
        t1.pay();
        t1.displayStatus();
        Salesman s1;
        s1.pay();
        s1.displayStatus();
        Salesmanager sa1;
        sa1.pay();
        sa1.displayStatus();
    */
    company c1;
    c1.get_all_salemanager_salary();
    c1.show_all_employee_info();
    c1.save_all_info();
    //c1.find_Manager(1001);
    //c1.add_Manager(1001,9000);
    //c1.find_Manager(1001);
    c1.add_Salesman(1010, 9000, 0.5);
    c1.find_Salesman(1010);
    //c1.find_Salesman(1010);
    //c1.add_Technician(1011,20,40);
    //c1.find_Technician(1011);
    //c1.find_Manager(1001);
}