#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;

#include "functionsZero.h"
#include "functionsOne.h"
#include "functionsTwo.h"

int main()
{
    choose();

    if (userChoice == 1)
    {
        obtain_GradeCalc();
        calculate_GradeCalc();
        reply_GradeCalc();
    }
    else if (userChoice == 2)
    {
        obtain_FinalGPACalc();
        calculate_FinalGPACalc();
        reply_FinalGPACalc();
        // uniPossibilities_FinalGPACalc();
    }
    else if (userChoice == 3)
    {
    }

    return 0;
}