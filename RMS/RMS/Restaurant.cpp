#include "pch.h"
#include "Restaurant.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

const string Name = "77 Cuisine";
const string Street = "Independence Avenue";
const string PhysicalAddress = "118, Freedom Plaza";
const string Address = "P.O.Box 118 Windhoek Namibia";
int Capacity = 100;
const string Contact = "+264 817887444";


Restaurant::Restaurant()
{

}

void Restaurant::getName() {
	cout << Name << endl;
}

void Restaurant::getAddress() {
	cout << PhysicalAddress << endl;
	cout << Address << endl;
}

void Restaurant::getContact() {
	cout << Contact << endl;
}
void Restaurant::getCapacity() {
	cout << Capacity << endl;
}



Restaurant::~Restaurant()
{
}
