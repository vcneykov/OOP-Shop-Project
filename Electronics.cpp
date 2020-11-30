#include <iostream>
#include "Electronics.hpp"
#include "Product.hpp"
#include <cstring>
#pragma warning (disable:4996)

Electronics::Electronics(string name, int quantity, double price, string category) : Product(name, quantity, price)
{
	this->category = category;
}

std::string Electronics::GetCategory() const
{
	return this->category;
}

void Electronics::Print() const
{
	this->Product::Print();
	cout << "Category: " << this->category << endl;
}

ostream& operator<<(ostream& out, const Electronics& rhs)
{
	rhs.Print();
	out << "Category: " << rhs.category << endl;
	return out;
}
