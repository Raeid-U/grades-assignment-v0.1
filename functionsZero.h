#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;

int userChoice;

void choose()
{
    cout << "\n\nWhich function would you like to run?\n";

    cout << "[1] Final Grade Calculator\n";
    cout << "[2] GPA and Average Calculator\n";
    cout << "[3] Maintenace Grade Calculator\n\n";
    cin >> userChoice;
}
