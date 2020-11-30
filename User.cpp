#include "User.hpp"
#include "Cart.hpp"
#include <cstring>
#pragma warning(disable: 4996)
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

User::User()
{
	this->username = " ";
	this->password = " ";
	this->balance = 0;
	this->cart = Cart();
}

User::User(string username, string password, double balance, Cart cart)
{
	this->username = username;
	this->password = password;
	this->balance = balance;
	this->cart = cart;
}

bool User::operator==(const User& rhs) const
{
	return (this->username == rhs.username) && (this->password == rhs.password) && 
			(this->balance == rhs.balance) && (this->cart == rhs.cart);
}

std::string User::GetUsername() const
{
	return this->username;
}

std::string User::GetPassword() const
{
	return this->password;
}

double User::GetBalance() const
{
	return this->balance;
}

void User::PrintUser() const
{
	cout << this->username << endl;
	cout << this->password << endl;
	cout << this->balance << endl;
	cout << cart.GetSum() << endl;
}
