#include <iostream>
#include "Product.hpp"
#include <cstring>
#pragma warning(disable: 4996)

using namespace std;

Product::Product(){
	this->name = " ";
	this->price = 0;
	this->quantity = 0;
}

Product::Product(string name, int quantity, double price)
{
	this->name = name;
	this->quantity = quantity;
	this->price = price;
}

bool Product::operator==(const Product& rhs) const
{
	return ((this->name == rhs.name) && (this->quantity == rhs.quantity) && (this->price == rhs.price));
}


bool Product::operator>(const Product& rhs) const
{
	int size_this_name = this->name.length();
	int size_rhs_name = rhs.name.length();
	int counter = 0;

	if (size_this_name = size_rhs_name) {
		for (int i = 0; i < size_rhs_name; i++) {
			if (this->name[i] != rhs.name[i]) {
				if (this->name[i] > rhs.name[i]) {
					return false;
				}
				else {
					return true;
				}
			}
			else {
				counter++;
			}
		}
		if (counter == size_rhs_name) {
			return false;
		}
	}

	else if (size_this_name < size_rhs_name) {
		for (int i = 0; i < size_this_name; i++) {
			if (this->name[i] > rhs.name[i]) {
				return false;
			}
			else {
				return true;
			}
		}
	}

	else {
		for (int i = 0; i < size_rhs_name; i++) {
			if (this->name[i] > rhs.name[i]) {
				return false;
			}
			else {
				return true;
			}
		}
	}
}

std::string Product::GetName() const
{
	return this->name;
}

double Product::GetPrice() const
{
	return this->price;
}

int Product::GetQuantity() const
{
	return this->quantity;
}

string Product::GetCategory() const
{
	return "Category: ";
}

void Product::Print() const {
	cout << "Name: " << this->name << endl;
	cout << "Price: " << this->price << endl;
	cout << "Quantity: " << this->quantity << endl;
}

void Product::SetName(std::string name)
{
	this->name = name;
}

void Product::SetPrice(double price)
{
	this->price = price;
}

void Product::SetQuantity(int quantity)
{
	this->quantity = quantity;
}

ostream& operator<<(ostream& out, const Product& rhs)
{
	out << "Product: " << rhs.name << endl << "Price: " << rhs.price << endl << "Quantity: " << rhs.quantity << endl;
	return out;
}
