#include "pch.h"
#include "Food.h"
#include <cstring>
#include <string>
#include <string.h>
#include <fstream>
#include <iostream>
using namespace std;

double total;

double itemPriceArr[14];
string foodOrderArr[14];

string food[7] = {};
double foodprice[] = { 80.00, 20.00, 95.00, 35.00, 25.00, 120.00, 110.00 };

string drink[7] = {};
double drinkprice[] = { 10.00, 20.00, 25.00, 45.00, 28.00, 25.00, 35.00 };


Food::Food()
{
}

//removes/resets the items in the order.txt file to Null. Removing the order placed.
void Food::resetFoodDrink(int i){
	int y;
	int id;
	double price;
	string name;
	ifstream ifile("order.txt");
	ofstream ofile("order.txt");
	if (ifile.is_open()) {
		while (ifile >> id >> name >> price) {
			for (int x = 0; x < 1; ++x) {
				int run = 1;
				while (run == 1 && id == i)
				{
					cout << "" << endl;
					id = NULL;
					name = "";
					price = NULL;
					ofile << id << " " << name << " "<< price << '\n';
					run = run + 1;
				}
			}
		}
		ifile.close();
		ofile.close();
	}
	else {
		cout << "file failed to open";
	}
}

//Outputs only specific line of food.txt to order.txt
void Food::addfood(int i) {
	int id;
	string name;
	double price;
	ifstream ifile("food.txt");
	ofstream ofile("order.txt", ofstream::app);
	if (ifile.is_open()) {
		while (ifile >> id >> name >> price) {
			for (int x = 0; x < 1; ++x) {
				int run = 1;
				while (run == 1 && id == i)
				{
					//cout <<"Order for: ";
					//cout << id << " " << name <<" has been processed." <<'\n';
					ofile << id << " " << name << " " <<price << endl;
					run = run + 1;
				}
			}
		}
		ifile.close();
		ofile.close();
	}
	else {
		cout << "file failed to open";
	}

	 
}

//adds the price of food that is ordered to the item price array
void Food::addfoodPrice(int i) {
	int id;
	string name;
	double price;
	ifstream ifile("food.txt");
	if (ifile.is_open()) {
		while (ifile >> id >> name >> price) {
			for (int x = 0; x < 1; ++x) {
				int run = 1;
				while (run == 1 && id == i)
				{
					total = total + price;
					run = run + 1;
				}
			}
		}
		ifile.close();
	}
	else {
		cout << "file failed to open";
	}
}

//Outputs only specific line of drink.txt to order.txt
void Food::addDrink(int i) {
	int id;
	string name;
	double price;
	ifstream ifile("drinks.txt");
	ofstream ofile("order.txt", ofstream::app);
	if (ifile.is_open()) {
		while (ifile >> id >> name >> price) {
			for (int x = 0; x < 1; ++x) {
				int run = 1;
				while (run == 1 && id == i)
				{
					cout << "Order for: ";
					cout << id << " " << name << " has been processed." << '\n';
					ofile << id << " " << name << " " << price << endl;
					run = run + 1;
				}
			}
		}
		ifile.close();
		ofile.close();
	}
	else {
		cout << "file failed to open";
	}

}

//adds the price of a drink that is ordered to the item price array
void Food::addDrinkPrice(int i) {
	int id;
	string name;
	double price;
	ifstream ifile("order.txt");
	//ofstream ofile("order.txt", ofstream::app);
	if (ifile.is_open()) {
		while (ifile >> id >> name >> price) {
			for (int x = 0; x < 1; ++x) {
				int run = 1;
				while (run == 1 && id == i)
				{
					total = total + price;
					run = run + 1;
				}
			}
		}
		ifile.close();
		//ofile.close();
	}
	else {
		cout << "file failed to open";
	}
}

//displays every item in the order.txt file
void Food::getfoodOrderArr() {
	cout << "Items ordered:" << endl;
	cout << ""<<endl;
	string line;
	ifstream file("order.txt");
	if (file.is_open()) {
		while (getline(file, line)) {
			cout << line << '\n';
		}
		file.close();
	}
	else {
		cout << "file failed to open";
	}
	cout << "" << endl;

}

//outputs the entire ordered items price array
void Food::getItemPriceArr() {
	for (int i = 0; i < 20; i++) {
		cout << itemPriceArr[i] << endl;
	}
}

//Enables the user to select food items in the order menu
void Food::foodSelection() {
	int a;
	while (a = 1) {
		int select;
		cout << "" << endl;
		cout << "\n Choose Food to add to Order";
		cout << "\n=============================";
		cout << "\n 1 - Cheese Burger";
		cout << "\n 2 - Fries";
		cout << "\n 3 - Beef Burger";
		cout << "\n 4 - Cake";
		cout << "\n 5 - Omellete";
		cout << "\n 6 - Steak";
		cout << "\n 7 - BBQ Chicken";
		cout << "\n Choose: " << endl;
		cin >> select;

		switch (select)
		{
		case 1: {
			cout << "Cheese Burger added to order" << endl;
			addfood(1);
			addfoodPrice(1);
			//total = total + foodprice[1];
		}
				break;
		case 2: {
			cout << "Fries added to order" << endl;
			addfood(2);
			addfoodPrice(2);
			//total = total + foodprice[2];
		}
				break;
		case 3: {
			cout << "Beef Burger added to order" << endl;
			addfood(3);
			addfoodPrice(3);
			//total = total + foodprice[3];
		}
				break;
		case 4: {
			cout << "Cake added to order" << endl;
			addfood(4);
			addfoodPrice(4);
			//total = total + foodprice[4];
		}
				break;
		case 5: {
			cout << "Omellete added to order" << endl;
			addfood(5);
			addfoodPrice(5);
			//total = total + foodprice[5];
		}
				break;
		case 6: {
			cout << "Steak added to order" << endl;
			addfood(6);
			addfoodPrice(6);
			//total = total + foodprice[6];
		}
				break;
		case 7: {
			cout << "BBQ Chicken added to order" << endl;
			addfood(7);
			addfoodPrice(7);
			//total = total + foodprice[7];
		}
				break;

		default: cout << "Invalid selection" << endl;
			break;
		}
		cout << "" << endl;
		cout << "\n 1 - Place another order";
		cout << "\n 2 - Back" << endl;
		cin >> a;
		if (a == 2) {
			break;
		}
	}
}

//Enables the user to select drink items in the order menu
void Food::drinkSelection() {
	int a;
	while (a = 1) {
		int select;
		cout << "" << endl;
		cout << "\n Choose a Drink to add to Order";
		cout << "\n=============================";
		cout << "\n 1 - Water";
		cout << "\n 2 - Juice";
		cout << "\n 3 - Soda";
		cout << "\n 4 - Wine";
		cout << "\n 5 - Coffee";
		cout << "\n 6 - Tea";
		cout << "\n 7 - Milkshake";
		cout << "\n Choose: " << endl;
		cin >> select;

		switch (select)
		{
		case 1: {
			cout << "Water added to order" << endl;
			addDrink(8);
			addDrinkPrice(8);
			//total = total + drinkprice[8];
		}
				break;
		case 2: {
			cout << "juice added to order" << endl;
			addDrink(9);
			addDrinkPrice(9);
			//total = total + drinkprice[9];
		}
				break;
		case 3: {
			cout << "Soda added to order" << endl;
			addDrink(10);
			addDrinkPrice(10);
			//total = total + drinkprice[10];
		}
				break;
		case 4: {
			cout << "Wine added to order" << endl;
			addDrink(11);
			addDrinkPrice(11);
			//total = total + drinkprice[11];
		}
				break;
		case 5: {
			cout << "Coffee added to order" << endl;
			addDrink(12);
			addDrinkPrice(12);
			//total = total + drinkprice[12];
		}
				break;
		case 6: {
			cout << "Tea added to order" << endl;
			addDrink(13);
			addDrinkPrice(13);
			//total = total + drinkprice[13];
		}
				break;
		case 7: {
			cout << "Milkshake added to order" << endl;
			addDrink(14);
			addDrinkPrice(14);
			//total = total + drinkprice[14];
		}
				break;
		default: cout << "Invalid selection" << endl;
			break;
		}
		cout << "" << endl;
		cout << "\n 1 - Place another order";
		cout << "\n 2 - Back" <<endl;
		cin >> a;
		if (a == 2) {
			break;
		}
	}
}

void Food::getFoodMenu() {
	cout << "\n";
	cout << "\n=================="<<endl;
	cout << "Food and Drinks Menu"<<endl;
	cout << "\n=================="<<endl;
	cout << "\n";
	//outputs the entire food.txt list 
	cout << "Food Menu:" << endl;
	cout << "";
	string line;
	ifstream file("food.txt");
	if (file.is_open()) {
		while (getline(file, line)) {
			cout << line << '\n';
		}
		file.close();
	}
	else {
		cout << "file failed to open";
	}
	cout << "" << endl;
	
	//outputs the entire drinks.txt list 
	cout << "Drink Menu:" << endl;
	cout << "";
	string iline;
	ifstream ifile("drinks.txt");
	if (ifile.is_open()) {
		while (getline(ifile, line)) {
			cout << line << '\n';
		}
		ifile.close();
	}
	else {
		cout << "file failed to open";
	}
	cout << "" << endl;
}

void Food::getTotal() {
	cout << " " << endl;
	cout << "Total: N$ " << total << endl;
}

void Food::dispFOArr() {
	
	//getItemPriceArr();
	getfoodOrderArr();
	cout << "___________" << endl;
	/*cout << "Bill of purchase" << endl;
	for (int i = 0; i < 5; i++) {
		int b = 1;
		b = b + i;
		cout << b << " -" << foodOrderArr[i] << "|    Price: " << itemPriceArr[i] << endl;
	};
	cout << "============================" << endl;*/
}

void Food::dispIPArr() {

}



void Food::removeOrder() {
	int a;
	while (a = 1) {
		int select;
		cout << "" << endl;
		cout << "\n Choose item to remove from Order";
		cout << "\n============================="<<endl;
		getfoodOrderArr();
		cout << total;
		cout << "choose: " << endl;
		cin >> select;

		switch (select)
		{
		case 1: {
			cout << "Cheese Burger removed from order" << endl;
			resetFoodDrink(1);
			deductFoodPrice(1);
		}
				break;
		case 2: {
			cout << "Fries removed from order" << endl;
			resetFoodDrink(2);
			deductFoodPrice(2);
		}
				break;
		case 3: {
			cout << "Beef Burger removed from order" << endl;
			resetFoodDrink(3);
			deductFoodPrice(3);
		}
				break;
		case 4: {
			cout << "Cake removed from order" << endl;
			resetFoodDrink(4);
			deductFoodPrice(4);
		}
				break;
		case 5: {
			cout << "Omellete removed from order" << endl;
			resetFoodDrink(5);
			deductFoodPrice(5);
		}
				break;
		case 6: {
			cout << "Steak removed from order" << endl;
			resetFoodDrink(6);
			deductFoodPrice(6);
		}
				break;
		case 7: {
			cout << "BBQ removed from order" << endl;
			resetFoodDrink(7);
			deductFoodPrice(7);
		}
				break;
		//Drinks
		case 8: {
			cout << "Water removed from order" << endl;
			resetFoodDrink(8);
			deductDrinkPrice(8);
		}
				break;
		case 9: {
			cout << "juice removed from order" << endl;
			resetFoodDrink(9);
			deductDrinkPrice(9);
		}
				break;
		case 10: {
			cout << "Soda removed from order" << endl;
			resetFoodDrink(10);
			deductDrinkPrice(10);
		}
				break;
		case 11: {
			cout << "Wine removed from order" << endl;
			resetFoodDrink(11);
			deductDrinkPrice(11);
		}
				break;
		case 12: {
			cout << "Coffee removed from order" << endl;
			resetFoodDrink(12);
			deductDrinkPrice(12);
		}
				break;
		case 13: {
			cout << "Tea removed from order" << endl;
			resetFoodDrink(13);
			deductDrinkPrice(13);
		}
				break;
		case 14: {
			cout << "Milkshake removed from order" << endl;
			resetFoodDrink(14);
			deductDrinkPrice(14);
		}
				break;

		default: cout << "Invalid selection" << endl;
			break;
		}
		cout << "" << endl;
		cout << "1 - Remove another item" << endl;
		cout << "2 - back" << endl;
		cin >> a;
		if (a == 2) {
			break;
		}
	}
}

void Food::deductFoodPrice(int i) {
	int id;
	string name;
	double price;
	ifstream ifile("food.txt");
	if (ifile.is_open()) {
		while (ifile >> id >> name >> price) {
			for (int x = 0; x < 1; ++x) {
				int run = 1;
				while (run == 1 && id == i)
				{
					total = total - price;
					run = run + 1;
				}
			}
		}
		ifile.close();
	}
	else {
		cout << "file failed to open";
	}
}

void Food::deductDrinkPrice(int i) {
	int id;
	string name;
	double price;
	ifstream ifile("drinks.txt");
	if (ifile.is_open()) {
		while (ifile >> id >> name >> price) {
			for (int x = 0; x < 1; ++x) {
				int run = 1;
				while (run == 1 && id == i)
				{
					total = total - price;
					run = run + 1;
				}
			}
		}
		ifile.close();
	}
	else {
		cout << "file failed to open";
	}
}

Food::~Food()
{
}
