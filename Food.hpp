#pragma once
#include <iostream>
#include <cstring>
#include "Product.hpp"

class Food : public Product {
private:
	std::string category;
public:	
	// Constructors
	Food() = default;
	Food(string name, int quantity, double price, string categoty);

	// Operators
	friend ostream& operator<<(ostream& out, const Food& rhs);

	// Getters
	std::string GetCategory() const override;
	void Print() const override;
};