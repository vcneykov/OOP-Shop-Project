#include <iostream>
#include "Cart.hpp"
#include "Product.hpp"
#include "User.hpp"
#include "Shop.hpp"
#include "Food.hpp"
#include "Electronics.hpp"
#include "Clothes.hpp"
#include "Toys.hpp"

using namespace std;

Food Apple("Apple", 20, 3.2, "Food");
Clothes T_shirt("T-shirt", 10, 15.5, "Clothes");
Electronics Laptop("Laptop", 5, 1235, "Electronics");
Electronics Fridge("Fridge", 8, 350.5, "Electronics");
Toys Puzzle("Puzzle", 30, 15.9, "Toys");
Food Bread("Bread", 100, 1.3, "Food");
Electronics Dishwasher("Dishwasher", 10, 420, "Electronics");
Clothes Suit("Suit", 15, 47.9, "Clothes");
Clothes Dress("Dress", 50, 34.7, "Clothes");
Toys Ball("Ball", 36, 20.5, "Toys");
Toys Doll("Doll", 0, 14.2, "Toys"); // unavailable

int main() 
{
	Shop emag;
	Cart cart;
	User me("me", "ads", 12, cart);
	emag.AddUser(me);

	me.Login();

	emag.AddProduct(Bread);
	emag.AddProduct(Ball);
	emag.AddProduct(Laptop);

	emag.SortByName();
}

