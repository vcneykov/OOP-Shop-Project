#include <iostream>
#include "Toys.hpp"
#include "Product.hpp"
#include <cstring>
#pragma warning (disable:4996)

Toys::Toys(string name, int quantity, double price, string category) : Product(name, quantity, price)
{
	this->category = category;
}

std::string Toys::GetCategory() const
{
	return this->category;
}

void Toys::Print() const
{
	this->Product::Print();
	cout << "Category: " << this->category << endl;
}

ostream& operator<<(ostream& out, const Toys& rhs)
{
	rhs.Print();
	out << "Category: " << rhs.category << endl;
	return out;
}
