#include<iostream>
#include"company.h"
#include"stock.h"
#include"Manager.h"
#include"Salesman.h"
#include"Salesmanager.h"
#include"Technician.h"
#include<iomanip>
#include<string>
using namespace std;

void company::get_all_salemanager_salary() {
    for (int i = 0; i < Sal; i++) {
        salemanager_salary += sal[i].saleroom;
    }
    for (int i = 0; i < Sal; i++) {
        sal[i].team_saleroom = salemanager_salary;
    }
}

void company::show_all_employee_info() {
    all_e = Ma + Te + Sal + Sa;
    //ma[0].itscode-=all_e;
    cout << "-----------------------the_company_have: ";
    cout << all_e;
    cout << "  employees---------------------------------" << endl;
    cout << "---------------------------------Manager----------------------------------------" << endl;

    for (int i = 0; i < Ma; i++) {
        ma[i].pay();
        //ma[i].itscode++;
        ma[i].displayStatus();
    }
    cout << "---------------------------------Technician-------------------------------------" << endl;

    for (int i = 0; i < Te; i++) {
        te[i].pay();
        //te[i].itscode++;
        te[i].displayStatus();
    }
    cout << "---------------------------------Salesmanager------------------------------------" << endl;

    for (int i = 0; i < Sal; i++) {
        sal[i].pay();
        //sal[i].itscode++;
        sal[i].displayStatus();
    }
    cout << "---------------------------------Salesman----------------------------------------" << endl;

    for (int i = 0; i < Sa; i++) {
        sa[i].pay();
        //sa[i].itscode++;
        sa[i].displayStatus();
    }

}

void company::save_all_info() {

    for (int i = 0; i < Ma; i++) {
        ma[i].pay();
        ma[i].save(ma_save_path);
    }

    for (int i = 0; i < Te; i++) {
        te[i].pay();
        te[i].save(te_save_path);
    }

    for (int i = 0; i < Sal; i++) {
        sal[i].pay();
        sal[i].save(sal_save_path);
    }

    for (int i = 0; i < Sa; i++) {
        sa[i].pay();
        sa[i].save(sa_save_path);
    }
}


void company::find_Manager(int code) {
    stock stock_record;
    ifstream stock_file(ma_save_path + to_string(code) + ".dat", ios::binary);
    if (stock_file.fail()) {
        cerr << "open failure on ......." << endl;
    }
    int object_size = sizeof(stock);
    cout << "code description quantity " << endl;
    cout << left;
    while (stock_file.read(reinterpret_cast<char*>(&stock_record), object_size)) {
        cout << setw(5) << stock_record.get_code()
            << setw(20) << stock_record.get_description()
            << stock_record.get_quantity() << endl;
    }
    stock_file.close();
}

void company::find_Technician(int code) {
    stock stock_record;
    ifstream stock_file(te_save_path + to_string(code) + ".dat", ios::binary);
    if (stock_file.fail()) {
        cerr << "open failure on ......." << endl;
    }
    int object_size = sizeof(stock);
    cout << "code description quantity " << endl;
    cout << left;
    while (stock_file.read(reinterpret_cast<char*>(&stock_record), object_size)) {
        cout << setw(5) << stock_record.get_code()
            << setw(20) << stock_record.get_description()
            << stock_record.get_quantity() << endl;
    }
    stock_file.close();
}

void company::find_Salesmanager(int code) {
    stock stock_record;
    ifstream stock_file(sal_save_path + to_string(code) + ".dat", ios::binary);
    if (stock_file.fail()) {
        cerr << "open failure on ......." << endl;
    }
    int object_size = sizeof(stock);
    cout << "code description quantity " << endl;
    cout << left;
    while (stock_file.read(reinterpret_cast<char*>(&stock_record), object_size)) {
        cout << setw(5) << stock_record.get_code()
            << setw(20) << stock_record.get_description()
            << stock_record.get_quantity() << endl;
    }
    stock_file.close();
}
void company::find_Salesman(int code) {
    stock stock_record;
    ifstream stock_file(sa_save_path + to_string(code) + ".dat", ios::binary);
    if (stock_file.fail()) {
        cerr << "open failure on ......." << endl;
    }
    int object_size = sizeof(stock);
    cout << "code description quantity " << endl;
    cout << left;
    while (stock_file.read(reinterpret_cast<char*>(&stock_record), object_size)) {
        cout << setw(5) << stock_record.get_code()
            << setw(20) << stock_record.get_description()
            << stock_record.get_quantity() << endl;
    }
    stock_file.close();
}
void company::add_Manager(int itscode, float fixed_salary) {
    // Manager(int itscode,float fixed_s)
    Manager m(itscode, (int)fixed_salary);
    m.pay();
    m.save(ma_save_path);
}

void company::add_Technician(int itscode, int work_time, int per_hour_money) {
    //Technician(int itscode,int work_time,int per_hour_m)
    Technician t(itscode, work_time, (int)per_hour_money);
    t.pay();
    t.save(te_save_path);
}

void company::add_Salesman(int itscode, float sale_room, float Sales_commission) {
    //Salesman(int itscode,float sale_r, float Sales_com)
    Salesman s(itscode, sale_room, (int)Sales_commission);
    s.pay();
    s.save(sa_save_path);
}
void company::delete_em(int code) 
{

}