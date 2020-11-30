#include <iostream>
#include "Food.hpp"
#include "Product.hpp"
#include <cstring>
#pragma warning (disable:4996)

Food::Food(string name, int quantity, double price, string category) : Product(name,quantity,price)
{
	this->category = category;
}

std::string Food::GetCategory() const
{
	return this->category;
}

void Food::Print() const
{
	this->Product::Print();
	cout << "Category: " << this->category << endl;
}

ostream& operator<<(ostream& out, const Food& rhs)
{
	rhs.Print();
	out << "Category: " <<  rhs.category << endl;
	return out;
}
