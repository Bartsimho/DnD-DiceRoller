// CSVReader.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>



void CSVReader(int Modifiers[6])
{
    std::string Name;
    std::string StrMod;
    std::string DexMod;
    std::string ConMod;
    std::string IntMod;
    std::string WisMod;
    std::string ChaMod;
    int Int_StrMod;
    int Int_DexMod;
    int Int_ConMod;
    int Int_IntMod;
    int Int_WisMod;
    int Int_ChaMod;
    std::ifstream myFile;

    /* string CharName;

    cout << "What is the Name of your Character: ";
    cin >> CharName;
    */

    myFile.open("Character_Sheet.csv");
    while (myFile.good()) {
        std::getline(myFile, Name, ',');
        std::getline(myFile, StrMod, ',');
        std::getline(myFile, DexMod, ',');
        std::getline(myFile, ConMod, ',');
        std::getline(myFile, IntMod, ',');
        std::getline(myFile, WisMod, ',');
        std::getline(myFile, ChaMod, ',');

        Int_StrMod = stoi(StrMod);
        Int_DexMod = stoi(DexMod);
        Int_ConMod = stoi(ConMod);
        Int_IntMod = stoi(IntMod);
        Int_WisMod = stoi(WisMod);
        Int_ChaMod = stoi(ChaMod);

        Modifiers[0] = Int_StrMod;
        Modifiers[1] = Int_DexMod;
        Modifiers[2] = Int_ConMod;
        Modifiers[3] = Int_IntMod;
        Modifiers[4] = Int_WisMod;
        Modifiers[5] = Int_ChaMod;
    }
}

