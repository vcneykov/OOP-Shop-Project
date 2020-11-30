#pragma once
#include "Product.hpp"
#include "User.hpp"
#include <vector>

class Shop {
private:
	std::vector<Product*> products;
	std::vector<User> users;
public:
	Shop() = default;

	void AddProduct(Product& to_add);
	void RemoveProduct(string name);

	void AddUser(User to_add);
	void RemoveUser(string username);

	void ChangeName(Product& to_change, std::string new_name);
	void ChangePrice(Product& to_change, double new_price);
	void ChangeQuantity(Product& to_change, int new_quantity);
	void ShowAllProducts() const;
	void ShowOnlyAvailable() const;
	void ShowOnlyUnavailable() const;
	void FilterByPrice(int maxPrice) const;  // shows only products with price < maxPrice
	void FilterByCategory(string category) const;    // shows all products of one category
	void SearchByName(string filter) const;
	void SortByPrice();
	void SortByName();
	void SortByCategory();
};