#include <string>
#include <vector>
#include <sstream>
#include <iostream>


using namespace std;


class UserCLI
{
     public:
        vector <double> splitString(const string& userInputString, char delimiterCharacter = ' ');
        vector <double> getUserInput();
        void printUserInputVector(vector <double> userInputNumbers);
};