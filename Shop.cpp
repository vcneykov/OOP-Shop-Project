#include "Product.hpp"
#include "User.hpp"
#include "Shop.hpp"
#include <cstring>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void Shop::ChangeName(Product& to_change, string new_name)
{
	to_change.SetName(new_name);
}

void Shop::ChangePrice(Product& to_change, double new_price)
{
	to_change.SetPrice(new_price);
}

void Shop::ChangeQuantity(Product& to_change, int new_quantity)
{
	to_change.SetQuantity(new_quantity);
}

void Shop::ShowAllProducts() const
{
	for (int i = 0; i < this->products.size(); i++)
	{
		products[i]->Print();
	}
}

void Shop::ShowOnlyAvailable() const
{
	for (int i = 0; i < this->products.size(); ++i) {
		if (products[i]->GetQuantity() > 0) {
			products[i]->Print();
		}
	}
}

void Shop::ShowOnlyUnavailable() const
{
	for (int i = 0; i < this->products.size(); ++i) {
		if (products[i]->GetQuantity() == 0) {
			products[i]->Print();
		}
	}
}

void Shop::FilterByPrice(int maxPrice) const
{
	for (int i = 0; i < this->products.size(); ++i) {
		if (products[i]->GetPrice() < maxPrice) {
			products[i]->Print();
		}
	}
}

void Shop::SearchByName(string filter) const
{
	for (int i = 0; i < this->products.size(); i++) {
		if (products[i]->GetName() == filter) {
			products[i]->Print();
		}
	}
}

void Shop::FilterByCategory(string category) const
{
	for (int i = 0; i < this->products.size(); i++)
	{
		if (this->products[i]->GetCategory() == category)
		{
			this->products[i]->Print();
		}
	}
}

void Shop::SortByCategory() 
{
	sort(products.begin(), products.end(), [](auto& a, auto& b)
		{
			return ((*a).GetCategory() < (*b).GetCategory());
		});

	for (auto products : products)
	{
		products->Print();
	}
}

void Shop::SortByPrice()
{
	sort(products.begin(), products.end(), [](auto& a, auto& b)
		{
			return ((*a).GetPrice() < (*b).GetPrice());
		});

	for (auto products: products)
	{
		products->Print();
	}
}

void Shop::SortByName() 
{
	sort(products.begin(), products.end(), [](auto& a, auto& b)
		{
			return ((*a).GetName() < (*b).GetName());
		});

	for (auto products : products)
	{
		products->Print();
	}
}

void Shop::AddProduct(Product& to_add)
{
	products.push_back(&to_add);
}

void Shop::RemoveProduct(string name)
{
	int index = -1;

	for (int i = 0; i < this->products.size(); i++)
	{
		if (this->products[i]->GetName() == name)
		{
			index = i;
			break;
		}
	}

	if (index != -1) {
		products.erase(products.begin() + index);
		cout << "Product removed successfully!\n";
	}
	else {
		cout << "There is no such product!\n";
	}
}

void Shop::AddUser(User to_add)
{
	this->users.push_back(to_add);
}

void Shop::RemoveUser(string username)
{
	int index = -1;

	for (int i = 0; i < this->users.size(); i++)
	{
		if (this->users[i].GetUsername() == username)
		{
			index = i;
			break;
		}
	}

	if (index != -1) {
		users.erase(users.begin() + index);
		cout << "User removed successfully!\n";
	}
	else {
		cout << "There is no such User!\n";
	}
}
