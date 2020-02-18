#include "Automata.h"
#include <iostream>
using namespace std;

int main()
{
	Automata *a = new Automata();
	a->on();
	a->printMenu();
	cout << endl;
	a->coin(50);
	a->choise(1);
	a->printCash();//проверка, правильно ли считает прибыль
	getchar();
}