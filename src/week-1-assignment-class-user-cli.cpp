#include "week-1-assignment-class-user-cli.h"


vector <double> UserCLI::splitString(const string& userInputString, char delimiterCharacter)
{
    vector <double> userInputVector;
    stringstream userInputStringStream(userInputString);
    string userInputItem;

    while (getline(userInputStringStream, userInputItem, delimiterCharacter))
    {
        userInputVector.push_back(stoi(userInputItem));
    }

    return userInputVector;

}

vector <double> UserCLI::getUserInput()
{
    string userInputMessage = "Enter a List of Numbers Separated by Space:";
    cout << userInputMessage << endl;

    string userInput;
    getline(cin, userInput);

    vector <double> userInputNumbers = splitString(userInput);

    return userInputNumbers;
}

void UserCLI::prdoubleUserInputVector(vector <double> userInputNumbers)
{
    cout << "You Entered: ";

    for (const auto& item : userInputNumbers)
    {
        cout << item << " ";
    }

    cout << endl;
}