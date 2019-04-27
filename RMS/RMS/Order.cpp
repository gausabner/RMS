#include "pch.h"
#include "Order.h"
#include "Food.h"
#include "Waiter.h"
#include <string>
#include <iostream>
using namespace std;

string orderArr[];

Order::Order()
{
}

void Order::orderMenu() {
	int select;
	cout << "\n Choose an Option";
	cout << "\n========";
	cout << "\n 1 - Order food";
	cout << "\n 2 - Order drink"<<endl;
	cout << "choose: " << endl;
	cin >> select;

	switch (select)
	{
	case 1: {
		foodOrder();
	}
			break;
	case 2: {
		drinkOrder();
	}
			break;
	default: cout << "Invalid selection" << endl;
		break;
	}
}

void Order::removeOrderMenu() {
	int select;
	cout << "\n Choose an Option";
	cout << "\n========";
	cout << "\n 1 - Edit Order";
	cout << "\n 2 - Back" << endl;
	cout << "choose: " << endl;
	cin >> select;

	switch (select)
	{
	case 1: {
		Food FObject;
		FObject.removeOrder();
	}
			break;
	case 2: {
	}
			break;
	default: cout << "Invalid selection" << endl;
		break;
	}
}

void Order::foodOrder() {
	Food FObject;
	FObject.foodSelection();
}

void Order::drinkOrder() {
	Food FObject;
	FObject.drinkSelection();
}

Order::~Order()
{
}
