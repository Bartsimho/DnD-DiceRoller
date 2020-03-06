#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>

int d20Check = 0;

int d4(int output) {
	output = 1 + (rand() % 4);
	return output;
}

int d6(int output) {
	output = 1 + (rand() % 6);
	return output;
}

int d8(int output) {
	output = 1 + (rand() % 8);
	return output;
}

int d10(int output) {
	output = 1 + (rand() % 10);
	return output;
}

int d12(int output) {
	output = 1 + (rand() % 12);
	return output;
}

int d20(int output) {
	output = 1 + (rand() % 20);
	return output;
}

int d100(int output) {
	output = 1 + (rand() % 100);
	return output;
}

void D20Check(int output) {
	d20(output);
	std::cout << output << std::endl;
}