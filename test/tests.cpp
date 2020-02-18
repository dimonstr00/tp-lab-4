#include "gtest/gtest.h"
#include "Automata.h"

TEST(lab4, task1) 
{
	bool test;
	Automata *a = new Automata();
	a->on();
	a->coin(50);
	a->choise(1);
	test=a->check(1);
	EXPECT_EQ(true, test);
}