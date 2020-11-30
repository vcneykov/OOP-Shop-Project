#include "User.hpp"
#include <string>
#include <fstream>

bool User::IsLoggedIn()
{
	string stored_username, stored_password;

	cout << "Enter username: ";
	cin >> this->username;

	cout << "Enter password: ";
	cin >> this->password;

	ifstream read("Users.txt");

	getline(read, stored_username);
	getline(read, stored_password);

	if (stored_username == this->username && stored_password == this->password) {
		return true;
	}
	else {
		return false;
	}
}

void User::Register()
{
	cout << "Please enter your username: ";
	cin >> this->username;

	cout << "Please enter your password: ";
	cin >> this->password;

	ofstream toWrite("Users.txt", ios::app);

	if (!toWrite.is_open()) {
		cout << "Error opening file! \n";
	}

	toWrite << this->username << '\n' << this->password << endl;
	system("cls");
	cout << "Registration Sucessful\n";

	toWrite.close();
	Login();
}

void User::Login()
{
	int menu = 0;

	cout << "Press 1 to register or press 2 for log in! (If you do not have an account you can not continue!) \n";
	cin >> menu;

	if (menu == 1) {
		Register();
	}
	else if (menu == 2)
	{
		bool status = this->IsLoggedIn();

		if (!status) {
			cout << "Error logging in! \n";
		}
		else {
			cout << "Successful login! \n";
		}
	}
	else if (menu != 0 && menu != 1 && menu != 2){
		Login();
	}
}