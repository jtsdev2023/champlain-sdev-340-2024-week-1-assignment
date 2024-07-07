/**
 * File: week-1-assignment-class-math-library.h
 * Author: Jeremy Sizemore
 * Date: July 3, 2024
 * Course: SDEV-340
 * 
 * Description: This file contains the UserCLI class definition.
 */

#include <string>
#include <vector>
#include <sstream>
#include <iostream>


using namespace std;


class UserCLI
{
     private:
        vector <double> splitString(const string& userInputString, char delimiterCharacter = ' ');
     public:
        vector <double> getUserInput();
        void printUserInputVector(vector <double> userInputNumbers);
};