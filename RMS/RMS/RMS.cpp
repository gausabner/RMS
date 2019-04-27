// RMS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include "Restaurant.h"
#include "Food.h"
#include "Waiter.h"
#include "Order.h"
#include "Billing.h"
using namespace std;

void removeOrder(int i) {
	int y;
	int id;
	string name;
	ifstream ifile("food.txt");
	ofstream ofile("order.txt");
	if (ifile.is_open()) {
		while (ifile >> id >> name) {
			for (int x = 0; x < 1; ++x) {
				int run = 1;
				while (run == 1 && id == i)
				{
					cout << "The item: ";
					cout << id << " " << name << "has been successfully removed"<< '\n';
					y = NULL;
					id = y;
					name = "";
					ofile << id << " " << name << '\n';
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


int main()
{
	
	/*
	//outputs the entire food.txt list 
	cout << "Here is your list:" << endl;
	cout << "";
	string line;
	ifstream file("food.txt");
	if (file.is_open()) {
		while (getline(file, line)){
			cout << line << '\n';
		}
		file.close();
	}
	else {
		cout << "file failed to open";
	}
	cout << ""<<endl;
	
	int r;
	cout << "remove an order: " << endl;
	cin >> r;
	removeOrder(r);
	
	//Outputs only specific line of food.txt to display
	//Outputs only specific line of food.txt to order.txt
	int y;
	cout << "Choose an item:" << endl;
	cin >> y;
	int id;
	string name;
	ifstream ifile("Prices.txt");
	ofstream ofile("order.txt");
	if (ifile.is_open()) {
		while (ifile >> id >> name) {
			for (int x = 0; x < 1; ++x) {
				int run=1;
				while (run == 1 && id == y)
				{
					cout << "Here is the item you ordered: ";
					cout << id << " " << name << '\n';
					ofile << id <<" "<< name << '\n';
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
	*/

	
	int a=1;
	cout << "\n Welcome to Fresh Menu";
	cout << "\n======================";
	cout << "\n 1 - Begin";
	cout << "\n: ";
	cin >> a;
	
	while (a==1)
	{
		char selection;

		cout << "\n Menu";
		cout << "\n========";
		cout << "\n 1 - Food and Drinks Menu";
		cout << "\n 2 - Choose a waiter";
		cout << "\n 3 - Order Food and Drinks";
		cout << "\n 4 - Edit your order";
		cout << "\n 5 - View Bill";
		cout << "\n 6 - Generosity/Tip";
		cout << "\n 7 - Restaurant Details";
		cout << "\n 8 - Exit";
		cout << "\n Enter selection: ";
		// read the input
		cin >> selection;

		switch (selection)
		{
		case '1': {
			Food FObject;
			FObject.getFoodMenu();
		}

				  break;
		case '2': {
			Waiter WObject;
			WObject.WaiterMenu();
		}
				  break;
		case '3': {
			Order Oobject;
			Oobject.orderMenu();
		}

				  break;
		case '4': {
			Order Oobject;
			Oobject.removeOrderMenu();
		}
				  break;
		case '5': {
			Billing Bobject;
			Bobject.getSubTotal();
		}

				  break;
		case '6': {
			Billing BObject;
			BObject.getTip();
		}
				  break;
		case '7': {
				cout << "" << endl;
				cout << "========== FRESH MENU ==========" << endl;
				cout << "================================" << endl;
				cout << "" << endl;

				Restaurant RObject;

				RObject.getName();
				RObject.getAddress();
				RObject.getCapacity();
				RObject.getContact();
				cout << "" << endl;
				cout << "================================" << endl;
				cout << "" << endl;
		}
				  break;
		case '8': {cout << "\n Sure you want to exit ?";
					cout << "\n===============";
		}
				  break;
				  // s
		default: cout << "\n Invalid selection";
			// no break in the default case
		}

		cout << "\n 1 - Back to Menu";
		cout << "\n 2 - Exit";
		cout << "\n choose: ";
		cin >> a;
		
		if (a==2){
			break;
		}
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
