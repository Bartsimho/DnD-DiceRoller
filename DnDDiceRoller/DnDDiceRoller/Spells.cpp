#include <iostream>
#include "Dice.h"

double AcidDamage = 0;
double BludgeoningDamage = 0;
double ColdDamage = 0;
double FireDamage = 0;
double ForceDamage = 0;
double LightningDamage = 0;
double NecroticDamage = 0;
double PiercingDamage = 0;
double PoisonDamage = 0;
double PsychicDamage = 0;
double RadiantDamage = 0;
double SlashingDamage = 0;
double ThunderDamage = 0;


void AbiDalzimsHorridWilting(int result) {
	std::cout << "Abi-Dalzim's Horrid Wilting" << std::endl;
	for (int n = 8; n > 0; n--) {
		int RollResult = d8(result);
		NecroticDamage = NecroticDamage + RollResult;
	}
	std::cout << "On a failed Constitution save creatures take " << NecroticDamage << " Necrotic Damage and " << NecroticDamage / 2 << " on a successfull save" << std::endl;
}