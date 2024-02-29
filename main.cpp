#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;

#include "functionsZero.h"
#include "functionsOne.h"
#include "functionsTwo.h"

int reRunMain = 1;

int main()
{
    do
    {
        choose();

        if (userChoiceZero == 1)
        {
            obtain_GradeCalc();
            calculate_GradeCalc();
            reply_GradeCalc();
        }
        else if (userChoiceZero == 2)
        {
            obtain_FinalGPACalc();
            calculate_FinalGPACalc();
            reply_FinalGPACalc();
            // uniPossibilities_FinalGPACalc();
        }
        else if (userChoiceZero == 3)
        {
        }

        cout << "\n\nWould you like to run again?:\n";
        cout << "[1] Yes\n";
        cout << "[2] No\n\n";
        cin >> reRunMain;
        system("clear");
    } while (reRunMain == 1);
    return 0;
}