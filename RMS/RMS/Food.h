#pragma once
class Food
{
public:
	
	Food();
	void resetFoodDrink(int i);
	void addfood(int i);
	void addfoodPrice(int i);
	void addDrink(int i);
	void addDrinkPrice(int i);
	void getfoodOrderArr();
	void getItemPriceArr();
	void foodSelection();
	void drinkSelection();
	void getFoodMenu();
	void getTotal();
	void dispFOArr();
	void dispIPArr();
	void removeOrder();
	void deductFoodPrice(int i);
	void deductDrinkPrice(int i);
	~Food();
};

