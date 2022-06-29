#if !defined STOCK_CPP
#define STOCK_CPP
#include"stock.h"
#include<cstring>
using namespace std;
stock::stock() {
	stock_code = 0;
	quantity_in_stock = 0;
	description[0] = '\0';
}
stock::stock(int code,const char desc[], int quantity) {
	stock_code = code;
	strcpy_s(description, desc);
	quantity_in_stock = quantity;
}
void stock::set_quantity(int quantity) {
	quantity_in_stock = quantity;
}
const int stock::get_code()const {
	return stock_code;
}
const char* stock::get_description() const {
	return description;
}
const int stock::get_quantity() const {
	return quantity_in_stock;
}
void stock::binary_write(ofstream& os) {
	os.write(reinterpret_cast<char*>(this), sizeof(*this));
}
bool stock::binary_read(ifstream& is) {
	is.read(reinterpret_cast<char*>(this), sizeof(*this));
	return !is.eof();
}
#endif