#include <iostream>
#include <string>

using namespace std;

const double tax_multiplier = 1.25;

class Commodity{
public:
    Commodity(string name, int id, double price);

    string get_name() const;

    int get_id() const;

    double get_price() const;

    double get_price(double quantity) const;

    void set_price(double price);

    double get_price_with_sales_tax() const;

    double get_price_with_sales_tax(double quantity) const;
private:
    string name;
    int id;
    double price;
};

Commodity::Commodity(std::string name, int id, double price) : name(name), id(id), price(price) {}

string Commodity::get_name() const{
    return name;
}

int Commodity::get_id() const {
    return id;
}

double Commodity::get_price() const {
    return price;
}

double Commodity::get_price(double quantity) const {
    return price * quantity;
}

void Commodity::set_price(double new_price) {
    price = new_price;
}

double Commodity::get_price_with_sales_tax() const {
    return get_price() * tax_multiplier;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
    return get_price_with_sales_tax() * quantity;
}
