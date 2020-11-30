#pragma once
#include <iostream>
#include <cstring>
#include "Product.hpp"

class Electronics : public Product {
private:
	std::string category;
public:
	// Constructors
	Electronics() = default;
	Electronics(string name, int quantity, double price, string categoty);

	// Operators
	friend ostream& operator<<(ostream& out, const Electronics& rhs);

	// Getters
	std::string GetCategory() const override;
	void Print() const override;
};