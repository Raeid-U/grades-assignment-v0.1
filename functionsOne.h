#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;

int numGradesOne;
double placeHolderGradeOne;
float placeHolderWeightOne;

float weightAchievedOne;
float totalWeightOne;

float finalGradeOne;

void obtain_GradeCalc()
{
    cout << "\nGrade Calculator Launched\n";
    cout << "\nHow many Assignments/Tests/Grades will you input?\n";
    cin >> numGradesOne;

    cout << "\n\n Please Input the Grades you have achieved and their weights\n";

    for (int i = 1; i <= numGradesOne; i++)
    {
        cout << "\n";
        cout << " Grade (%) for Marked Item " << i << ": ";
        cin >> placeHolderGradeOne;
        placeHolderGradeOne = (placeHolderGradeOne / 100);
        cout << " Weight for Marked Item" << i << ": ";
        cin >> placeHolderWeightOne;

        totalWeightOne = totalWeightOne + placeHolderWeightOne;
        weightAchievedOne = weightAchievedOne + (placeHolderWeightOne * placeHolderGradeOne);
    }
}

void calculate_GradeCalc()
{
    finalGradeOne = 100 * (weightAchievedOne * (1 / totalWeightOne));
}

void reply_GradeCalc()
{
    cout << "\n\n"
         << "Your Final Grade is: " << finalGradeOne << "\n";
    cout << "\n\n";
    system("read");
}
