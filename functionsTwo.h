#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;

int numCoursesTwo;
float gradesTotalTwo;
float gpaTotalTwo;
float placeHolderGradeTwo;
float placeHolderGPATwo;
float averageGradeTwo;
float averageGPATwo;

// char arr[14] = {"U Waterloo", "UofT", "McMaster University", "University of Laurier", "McGill University", "York University", "Toronto Metropolitan University", "Western University", "University of Brittish Columbia", "University of Guelph", "Carleton University", "Brock University", "Algoma University", "Sheraton University", "Seneca College"};

void obtain_FinalGPACalc() // obtains courses and grades from user
{
    cout << "\nGPA and Average Calculator Launched\n";
    cout << "\nHow many courses did you take?\n";
    cin >> numCoursesTwo; // prompts # of courses taken

    cout << "\n\n Please input the grades (%) for each course\n";
    for (int i = 1; i <= numCoursesTwo; i++) // records the grade for each course
    {
        cout << " Course " << i << ": ";
        cin >> placeHolderGradeTwo;

        if (placeHolderGradeTwo < 0 || placeHolderGradeTwo > 100) // ensures grade entered exists
        {
            cout << " Error, Invalid Grade\n";
            cout << " Please re-input --- Course " << i << ": ";
            cin >> placeHolderGradeTwo;
        }

        if (placeHolderGradeTwo >= 93 && placeHolderGradeTwo <= 100) // assigns a GPA to the grade provided
        {
            placeHolderGPATwo = 4.0;
        }
        else if (placeHolderGradeTwo >= 90 && placeHolderGradeTwo <= 92)
        {
            placeHolderGPATwo = 3.7;
        }
        else if (placeHolderGradeTwo >= 87 && placeHolderGradeTwo <= 89)
        {
            placeHolderGPATwo = 3.3;
        }
        else if (placeHolderGradeTwo >= 83 && placeHolderGradeTwo <= 86)
        {
            placeHolderGPATwo = 3.0;
        }
        else if (placeHolderGradeTwo >= 80 && placeHolderGradeTwo <= 82)
        {
            placeHolderGPATwo = 2.7;
        }
        else if (placeHolderGradeTwo >= 77 && placeHolderGradeTwo <= 79)
        {
            placeHolderGPATwo = 2.3;
        }
        else if (placeHolderGradeTwo >= 73 && placeHolderGradeTwo <= 76)
        {
            placeHolderGPATwo = 2.0;
        }
        else if (placeHolderGradeTwo >= 70 && placeHolderGradeTwo <= 72)
        {
            placeHolderGPATwo = 1.7;
        }
        else if (placeHolderGradeTwo >= 67 && placeHolderGradeTwo <= 69)
        {
            placeHolderGPATwo = 1.3;
        }
        else if (placeHolderGradeTwo >= 65 && placeHolderGradeTwo <= 66)
        {
            placeHolderGPATwo = 1.0;
        }
        else if (placeHolderGradeTwo < 65)
        {
            placeHolderGPATwo = 0;
        }

        gradesTotalTwo = gradesTotalTwo + placeHolderGradeTwo; // dump placeholder
        gpaTotalTwo = gpaTotalTwo + placeHolderGPATwo;         // dump placeholder
    }
}

void calculate_FinalGPACalc() // calculates averages
{
    averageGradeTwo = gradesTotalTwo / numCoursesTwo;
    averageGPATwo = gpaTotalTwo / numCoursesTwo;
}

void reply_FinalGPACalc() // returns averages to user
{
    cout << "\n\n";
    cout << "\nYour average for this semester was: " << averageGradeTwo << "\n";
    cout << "Your unweighted GPA is: " << averageGPATwo << "\n";
    cout << "\n";
    cout << "\n\n";
    system("Pause");
}

void uniPossibilities_FinalGPACalc()
{
}