#pragma once
#include "Product.hpp"
#include <vector>

class Cart {
private:
	std::vector<Product> productsInCart;
	double sum;
public:
	// Constructors
	Cart();

	// Operators
	bool operator==(const Cart& rhs) const;

	// Setters
	void SetCartSum(double price);

	// Getters
	double GetSum() const;

	// Functionalities
	void AddToCart(Product& to_add);
	void RemoveFromCart(Product& to_remove);
	void PrintProductsInCart() const;
};