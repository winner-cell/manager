#include<iostream>
#include<string>
#include"Salesmanager.h"
#include"stock.h"
using namespace std;

void Salesmanager::displayStatus() {
    cout << "The itsname is: " << code << endl;
    cout << "The itscode is: " << code << endl;
    cout << "The Monthly_salary is: " << Monthly_salary << endl;
    cout << "The fixed_salary is: " << fixed_salary << endl;
    cout << "The saleroom is: " << saleroom << endl;
    cout << "The Sales_commission is: " << Sales_commission << endl;
    cout << "The team saleroom is : " << team_saleroom << endl;
    cout << endl;
}

void Salesmanager::save(string save_path) {
    class stock stationery[7] = {
        stock(1,"itsname",code),
        stock(2,"itscode",code),
        stock(3,"its_Monthly_salary",Monthly_salary),
        stock(4,"its_fixed_salary",fixed_salary),
        stock(5,"its_saleroom",saleroom),
        stock(6,"its_Sales_commission",Sales_commission),
        stock(7,"its_team_saleroom",team_saleroom)
    };
    int object_size = sizeof(stock);
    ofstream stock_file(save_path + to_string(code) + ".dat", ios::binary);
    if (stock_file.fail()) {
        cerr << "open failure on " + to_string(code) + ".dat" << endl;
    }
    for (int i = 0; i < 7; i++) {
        stock_file.write(reinterpret_cast<char*>(&stationery[i]), object_size);
    }
    stock_file.close();
}
void Salesmanager::pay() {
    Monthly_salary = fixed_salary + team_saleroom * Sales_commission;
}