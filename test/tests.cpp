#include "gtest/gtest.h"
#include "Automata.h"
TEST(lab4,task)
{
	Automata *a = new Automata();
	a->on();
	a->printMenu();
	cout << endl;
	a->coin(50);
	a->choise(1);
	a->printCash();
	EXPECT_EQ(5,a->printCash());
}