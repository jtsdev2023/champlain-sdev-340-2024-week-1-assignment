/**
 * File: week-1-assignment-class-user-cli.cpp
 * Author: Jeremy Sizemore
 * Date: July 3, 2024
 * Course: SDEV-340
 * 
 * Description: This file is the implementation of the UserCLI class.
 */

#include "../include/week-1-assignment-class-user-cli.h"


vector <double> UserCLI::splitString(const string& userInputString, char delimiterCharacter)
{
    // method to split to split string, convert it to integers, and store it in a vector
    // used stackoverflow to figure out how to get user input and split it in c++
    vector <double> userInputVector;
    stringstream userInputStringStream(userInputString);
    string userInputItem;

    // while loop get user input and add it to vector
    while (getline(userInputStringStream, userInputItem, delimiterCharacter))
    {
        userInputVector.push_back(stoi(userInputItem));
    }

    return userInputVector;

}

vector <double> UserCLI::getUserInput()
{
    // method to get user input
    string userInputMessage = "Enter a List of Numbers Separated by Space:";
    cout << userInputMessage << endl;

    string userInput;
    getline(cin, userInput);

    // used stackoverflow to figure out how to split a string in c++
    vector <double> userInputNumbers = splitString(userInput);

    return userInputNumbers;
}

void UserCLI::printUserInputVector(vector <double> userInputNumbers)
{
    // method to print out user input
    cout << "You Entered: ";

    // for loop to print out user input
    for (const auto& item : userInputNumbers)
    {
        cout << item << " ";
    }

    cout << endl;
}