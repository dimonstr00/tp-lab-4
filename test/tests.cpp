#include "gtest/gtest.h"
#include "Automata.h"
#include <iostream>
using namespace std;
TEST(lab4,task)
{
	Automata *a = new Automata();
	a->on();
	a->printMenu();
	a->coin(50);
	a->choise(1);
	a->printCash();
	EXPECT_EQ(5,a->printCash());
}