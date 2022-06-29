#include<iostream>
#include<string>
#include"Salesman.h"
#include"stock.h"
using namespace std;

void Salesman::displayStatus() {
    cout << "The itsname is: " << itsname << endl;
    cout << "The itscode is: " << code << endl;
    cout << "The Monthly_salary is: " << Monthly_salary << endl;
    cout << "The saleroom is: " << saleroom << endl;
    cout << "The Sales_commission is: " << Sales_commission << endl;
    cout << endl;
}
void Salesman::save(string save_path) {
    class stock stationery[5] = {
        stock(1,"itsname",code),
        stock(2,"itscode",code),
        stock(3,"its_Monthly_salary",Monthly_salary),
        stock(4,"its_saleroom",saleroom),
        stock(5,"its_Sales_commission",Sales_commission)
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
void Salesman::pay() {
    Monthly_salary = saleroom * Sales_commission;
}