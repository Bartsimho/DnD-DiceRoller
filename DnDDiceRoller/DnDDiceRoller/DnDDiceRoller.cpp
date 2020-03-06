// DnDDiceRoller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include "Dice.h"
#include "Spells.h"



int main() {
	srand((unsigned)time(0));
	int result = 0;
	AbiDalzimsHorridWilting(result);
}