#include<iostream>
#include"stock.h"
#include"Manager.h"
#include<string>
using namespace std;

void Manager::displayStatus() {
    cout << "The itsname is: " << code << endl;
    cout << "The itscode is: " << code << endl;
    cout << "The Monthly_salary is: " << Monthly_salary << endl;
    cout << "The fixed_salary is: " << fixed_salary << endl;
    cout << endl;
}
void Manager::save(string save_path) {
    class stock stationery[4] = {
        stock(1,"itsname",code),
        stock(2,"itscode",code),
        stock(3,"its_Monthly_salary",Monthly_salary),
        stock(4,"its_fixed_salary",fixed_salary)
    };
    int object_size = sizeof(stock);
    ofstream stock_file(save_path + to_string(code) + ".dat", ios::binary);
    if (stock_file.fail()) {
        cerr << "open failure on " + to_string(code) + ".dat" << endl;
    }
    for (int i = 0; i < 4; i++) {
        stock_file.write(reinterpret_cast<char*>(&stationery[i]), object_size);
    }
    stock_file.close();
}
void Manager::pay() {
    Monthly_salary = fixed_salary;
}