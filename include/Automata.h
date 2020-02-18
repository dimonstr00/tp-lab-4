#pragma once
#include <vector>
#include <string>

enum STATES
{
	Off = 0,
	Wait = 1,
	Assept = 2,
	Check = 3,
	Cook = 4
};

class Automata 
{
private:
	double cash;
	double acount_cash;
	std::vector<std::string> menu;
	std::vector<double> prices;
	STATES state;
public:
	Automata();
	void on();
	void off();
	void coin(double amount);
	void printMenu();
	void printState();
	void choise(int n);
	bool check(int n);
	void cancel();
	void cook(int n);
	void finish();
	void printCash();
};