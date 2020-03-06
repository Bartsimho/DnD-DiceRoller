// DnDDiceRoller.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include "Dice.h"
#include "Spells.h"
#include <string>

std::string WhatToDo;
std::string CaseSection[462] = {"AbiDalzimsHorridWilting","AbsorbElements", "AcidSplash", "Aganazzar'sScorcher", "ArmsOfHadar", "AuraOfVitality", "BanishingSmite", "ClenchedFist", "InterposingHand", "BladeBarrier", "BlindingSmite", "BoomingBlade", "BrandingSmite", "BurningHands"};

int main() {
	srand((unsigned)time(0));
	int result = 0;
	std::cout << "Welcome to the DnD Dice and Spell Roller" << std::endl;
	std::cout << "What do you want to do? (Write in CamelCase): ";
	std::cin >> WhatToDo;
	if (WhatToDo == "D20Check") {
		D20Check(result);
	}
}