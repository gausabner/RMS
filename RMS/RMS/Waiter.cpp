#include "pch.h"
#include "Waiter.h"
#include <string>
#include <iostream>
using namespace std;

string storewaiter;
string waiter[] = { "Tom","Richie","Forest"};
string waitress[] = { "Esther","May","Jane"};

Waiter::Waiter()
{
}

void Waiter :: dispWaiter() {
	cout << "Your waiter: " << storewaiter<<endl;
}

void Waiter::WaiterMenu() {
	int select;
	cout << "\n Choose A Waiter/Waitress";
	cout << "\n========";
	cout << "\n 1 - View Waiters";
	cout << "\n 2 - Choose Waiter"<<endl;
	cout << "choose: "<<endl;
	cin >> select;

	switch (select)
	{
	case 1:{
		getDetails();
	}
		   break;
	case 2:{
		chooseWaiter();
	}
		   break;
	default: cout << "Invalid selection" << endl;
		break;
	}
}

void Waiter::getDetails() {
	cout << "\n";
	cout << "\n========" << endl;
	cout << "Waiters" << endl;
	cout << "\n========" << endl;
	for (int i = 0; i < 3; i++) {
		int b = 1;
		b = b + i;
		cout << b << " - Name: " << waiter[i] << endl;
	}

	for (int i = 0; i < 3; i++) {
		int b = 1;
		b = b + i;
		cout << b << " - Name: " << waitress[i] << endl;
	}
	cout << "============================" << endl;
}

void Waiter::chooseWaiter() {
	char selection;

	cout << "\n Choose A Waiter/Waitress";
	cout << "\n========";
	cout << "\n 1 - Tom";
	cout << "\n 2 - Richie";
	cout << "\n 3 - Forest";
	cout << "\n 4 - Esther";
	cout << "\n 5 - May";
	cout << "\n 6 - Jane";
	cout << "\n 7 - Exit";
	cout << "\n Enter selection: ";
	// read the input
	cin >> selection;

	switch (selection)
	{
	case '1': {
		cout << "\n Waiter Tom has been selected";
		storewaiter == *(waiter);
	}
			  break;
	case '2': {
		cout << "\n Waiter Richie has been selected";
		storewaiter == *(waiter + 1);
	}
			  break;
	case '3': {
		cout << "\n Waiter Forest has been selected";
		storewaiter == *(waiter + 2);
	}
			  break;
	case '4': {
		cout << "\n Waitress Esther has been selected";
		storewaiter == *(waitress);
	}
			  break;
	case '5': {
		cout << "\n Waitress May has been selected";
		storewaiter == *(waitress + 1);
	}
			  break;
	case '6': {
		cout << "\n Waitress Jane has been selected";
		storewaiter == *(waitress + 2);
	}
			  break;
	case '7': {
		cout << "==============="<<endl;
	}
			  break;
	default: cout << "Invalid selection" << endl;
	}
}


Waiter::~Waiter()
{
}
