#pragma once
#include <iostream>
#include <cstring>
#include "Product.hpp"

class Clothes : public Product {
private:
	std::string category;
public:
	// Constructors
	Clothes() = default;
	Clothes(string name, int quantity, double price, string category);

	// Operators
	friend ostream& operator<<(ostream& out, const Clothes& rhs);

	// Getters
	std::string GetCategory() const override;
	void Print() const override;
};