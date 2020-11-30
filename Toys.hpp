#pragma once
#include <iostream>
#include <cstring>
#include "Product.hpp"

class Toys : public Product {
private:
	std::string category;
public:
	// Constructors
	Toys() = default;
	Toys(string name, int quantity, double price, string categoty);

	// Operators
	friend ostream& operator<<(ostream& out, const Toys& rhs);

	// Getters
	std::string GetCategory() const override;
	void Print() const override;
};