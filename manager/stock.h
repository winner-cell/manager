#if !defined STOCK_H
#define STOCK_H
#include<fstream>
using namespace std;
class stock {
public:
    stock();
    stock(int code,const char desc[], int quantity);
    void set_quantity(int quantity);
    const int get_code()const;
    const char* get_description() const;
    const int get_quantity()const;
    void binary_write(ofstream& os);
    bool binary_read(ifstream& is);

private:
    int stock_code;
    char description[21];
    int quantity_in_stock;
};

#endif