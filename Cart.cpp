#include "Cart.hpp"
#include "Product.hpp"
#include <iostream>

Cart::Cart() : sum(0) {}

bool Cart::operator==(const Cart& rhs) const
{
	return ((this->sum == rhs.sum) && (this->productsInCart == rhs.productsInCart));
}

void Cart::SetCartSum(double price)
{
	this->sum = price;
}

double Cart::GetSum() const
{
	return this->sum;
}

void Cart::AddToCart(Product& to_add)
{
	this->productsInCart.push_back(to_add);
	this->sum += to_add.GetPrice();
}

void Cart::RemoveFromCart(Product& to_remove)
{
	for (int i = 0; i < this->productsInCart.size(); i++)
	{
		if (this->productsInCart[i].GetName() == to_remove.GetName())
		{
			this->productsInCart.erase(this->productsInCart.begin() + i);
		}
	}

	this->sum -= to_remove.GetPrice();
}

void Cart::PrintProductsInCart() const
{
	for (int i = 0; i < this->productsInCart.size(); i++)
	{
		std::cout << this->productsInCart[i];
	}
}
