#include "week-1-assignment-class-user-cli.h"


vector <int> UserCLI::splitString(const string& userInputString, char delimiterCharacter)
{
    vector<int> userInputVector;
    stringstream userInputStringStream(userInputString);
    string userInputItem;

    while (getline(userInputStringStream, userInputItem, delimiterCharacter))
    {
        userInputVector.push_back(stoi(userInputItem));
    }

    return userInputVector;

}

vector <int> UserCLI::getUserInput()
{
    string userInputMessage = "Enter a List of Numbers Separated by Space:";
    cout << userInputMessage << endl;

    string userInput;
    getline(cin, userInput);

    vector<int> userInputNumbers = splitString(userInput);

    return userInputNumbers;
}

void UserCLI::printUserInputVector(vector <int> userInputNumbers)
{
    cout << "You Entered: ";

    for (const auto& item : userInputNumbers)
    {
        cout << item << " ";
    }

    cout << endl;
}