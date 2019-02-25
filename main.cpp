#include <iostream>
#include <ctime>
#include "functions.h"

int main() {
    int numOfStatements = 9;
    srand(time(0));
    std::string finalStatement;
    int rando = rand() % numOfStatements + 1;
    switch(rando){
        case 1: finalStatement = statement1();
            break;
        case 2: finalStatement = statement2();
            break;
        case 3: finalStatement = statement3();
            break;
        case 4: finalStatement = statement4();
            break;
        case 5: finalStatement = statement5();
            break;
        case 6: finalStatement = statement6();
            break;
        case 7: finalStatement = statement7();
            break;
        case 8: finalStatement = statement8();
            break;
        case 9: finalStatement = statement9();
            break;
    }
    std::cout << finalStatement;

    return 0;
}
