#include<iostream>
#include<string>
#include"Technician.h"
#include"stock.h"
using namespace std;

void Technician::displayStatus() {
    cout << "The itsname is: " << code << endl;
    cout << "The itscode is: " << code << endl;
    cout << "The Monthly_salary is: " << Monthly_salary << endl;
    cout << "The worked_time is: " << worked_time << endl;
    cout << "The per_hour_money is: " << per_hour_money << endl;
    cout << endl;
}
void Technician::save(string save_path) {
    class stock stationery[5] = {
        stock(1,"itsname",code),
        stock(2,"itscode",code),
        stock(3,"its_Monthly_salary",Monthly_salary),
        stock(4,"its_worked_time",worked_time),
        stock(5,"per_hour_money",per_hour_money),
    };
    int object_size = sizeof(stock);
    ofstream stock_file(save_path + to_string(code) + ".dat", ios::binary);
    if (stock_file.fail()) {
        cerr << "open failure on " + to_string(code) + ".dat" << endl;
    }
    for (int i = 0; i < 5; i++) {
        stock_file.write(reinterpret_cast<char*>(&stationery[i]), object_size);
    }
    stock_file.close();
}
void Technician::pay() {
    Monthly_salary = worked_time * per_hour_money;
}