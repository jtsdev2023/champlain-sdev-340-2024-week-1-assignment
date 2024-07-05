#include <string>
#include <iostream>
#include "week-1-assignment-class-user-cli.cpp"


using namespace std;



int main() {
    
    UserCLI test1;
    vector <int> r = test1.getUserInput();
    test1.printUserInputVector(r);

    return 0;
}