#include <iostream>
#include <string>
#include <vector>
#include <sstream>


using namespace std;


class UserCLI
{
     public:
        vector <int> splitString(const string& userInputString, char delimiterCharacter = ' ');
        vector <int> getUserInput();
        void printUserInputVector(vector <int> userInputNumbers);
};