#include "Automata.h"
#include <iostream>
using namespace std;

Automata::Automata()
{
	cash = 0;
	acount_cash = 0;
	menu.push_back("milk");
	menu.push_back("tea");
	menu.push_back("coffie");
	prices.push_back(10);
	prices.push_back(5);
	prices.push_back(15);
	state = Off;
}

void Automata::on()
{
	state = Wait;
}

void Automata::off()
{
	state = Off;
}

void Automata::printState()
{
	switch (state)
	{
	case 0:
		cout << "Off" << endl;
		break;
	case 1:
		cout << "Wait" << endl;
		break;
	case 2:
		cout << "Assept" << endl;
		break;
	case 3:
		cout << "Check" << endl;
		break;
	case 4:
		cout << "Cook" << endl;
		break;
	default:
		break;
	}
}

void Automata::printMenu()
{
	for (auto i : menu)
	{
		cout << i << endl;
	}
}

void Automata::coin(double amount)
{
	printState();
	if (state !=Off)
	{
		state = Assept;
		acount_cash += amount;
		cash += amount;
	}
}

void Automata::cancel()
{
	state = Wait;
	printState();
	cash -= acount_cash;
	acount_cash = 0;

}

void Automata::choise(int n)
{
	if (state != Off)
	{
		state = Check;
		printState();
		if (check(n))
		{
			cook(n);
		}
		else
		{
			cancel();
		}
	}
}

bool Automata::check(int n)
{
	if (prices[n] <= acount_cash)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Automata::cook(int n)
{
	state = Cook;
	acount_cash -= prices[n];
	cout << "Cooking..." << endl;
	finish();
}

void Automata::finish()
{
	cash -= acount_cash;
	acount_cash = 0;
	state = Wait;
	printState();
}

void Automata::printCash()
{
	cout << cash << endl;
}