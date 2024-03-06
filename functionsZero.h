#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;

int userChoiceZero;

void choose()
{
    cout << "\n\nWhich function would you like to run?\n";

    cout << "[1] Final Grade Calculator (In a Course)\n";
    cout << "[2] GPA and Average Calculator (Overall / Per Semester)\n";
    cout << "[3] Maintenace Grade Calculator (In a Course)\n\n";
    cin >> userChoiceZero;
}
