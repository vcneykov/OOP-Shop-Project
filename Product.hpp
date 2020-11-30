#pragma once
#include <iostream>
#include <cstring>

using namespace std;

class Product {
private:
	string name;
	int quantity;
	double price;
public:
	// Constructors
	Product();
	Product(string name, int quantity, double price);

	// Operators
	friend ostream& operator<<(ostream& out, const Product& rhs);
	bool operator==(const Product& rhs) const;
	bool operator>(const Product& rhs) const; // Comparing by name (alphabetically)

	// Getters
	string GetName() const;
	double GetPrice() const;
	int GetQuantity() const;
	virtual string GetCategory() const;
	virtual void Print() const;

	//Setters
	void SetName(std::string name);
	void SetPrice(double price);
	void SetQuantity(int quantity);

};