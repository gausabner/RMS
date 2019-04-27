#include "pch.h"
#include "Billing.h"
#include "Order.h"
#include "Food.h"
#include "Waiter.h"
#include <string>
#include <iostream>
using namespace std;

double tip = 0.00;
double subtotal;

Billing::Billing()
{
}

void Billing::getTip() {
	cout << "Enter Tip: ";
	cin >> tip;
}

void Billing::dispTip() {
	Waiter WObject;
	WObject.dispWaiter();
	cout << "Tip: "<< tip <<endl;
}

void Billing::getSubTotal(){
	cout << "" << endl;
	cout << "Billing" << endl;
	cout << "========" << endl;
	dispTip();
	sumOfItems();
	cout << "========" << endl;
}

void Billing::sumOfItems() {
	Food FObject;
	
	FObject.dispFOArr();
	FObject.getTotal();
}


Billing::~Billing()
{
}
