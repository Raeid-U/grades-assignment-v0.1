#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;

int userChoiceThree;

void obtain_RequiredGrade()
{
    cout << "\nMaintenance Grade Calculator Launched\n";
    cout << "\nPlease select an option that applies to you:\n";

    cout << "[1] Term Mark + Exam\n";
    cout << "[2] Term Mark + Summative + Exam\n\n";
    cin >> userChoiceThree;
}