#pragma once
#include "Cart.hpp"
#include <cstring>

class User {
private:
	std::string username;
	std::string password;
	double balance;
	Cart cart;
public:
	// Constructors
	User();
	User(string username, string password, double balance, Cart cart);

	//Operators
	bool operator==(const User& rhs) const;

	// Getters
	std::string GetUsername() const;
	std::string GetPassword() const;
	double GetBalance() const;
	void PrintUser() const;

	// Functionalities
	bool IsLoggedIn();
	void Register();
	void Login();
	bool ChangePassword(string newPass);
};