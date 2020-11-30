#include <iostream>
#include "Clothes.hpp"
#include "Product.hpp"
#include <cstring>
#pragma warning (disable:4996)

Clothes::Clothes(string name, int quantity, double price, string category) : Product(name, quantity, price)
{
	this->category = category;
}

std::string Clothes::GetCategory() const
{
	return this->category;
}

void Clothes::Print() const
{
	this->Product::Print();
	cout << "Category: " << this->category << endl;
}

ostream& operator<<(ostream& out, const Clothes& rhs)
{
	rhs.Print();
	out << "Category: " << rhs.category << endl;
	return out;
}
