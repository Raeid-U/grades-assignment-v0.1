#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdlib>
using namespace std;

int userChoiceThree;
const char *choicesThree[5] = {"Term Weight: ", "Term Mark (%): ", "Summative Weight: ", "Summative Mark (%): ", "Exam Weight: "};
float termMarkThree;
float termWeightThree;
float summativeMarkThree;
float summativeWeightThree;
float examWeightRequiredThree = 0.00;
float examWeightThree;
float examGradeThree;

float expectedGradeThree;

float termWeightAchievedThree;
float summativeWeightAchievedThree;
float termGradeThree;

float totalWeightThree;
float totalWeightAchievedThree;
float examMarkOutOfThree;

void obtain_RequiredGrade()
{
    cout << "\nMaintenance Grade Calculator Launched\n";
    cout << "\nPlease select an option that applies to you:\n";

    cout << "[1] Term Mark + Exam\n";
    cout << "[2] Term Mark + Summative + Exam\n\n";
    cin >> userChoiceThree;

    if (userChoiceThree == 1)
    {
        for (int i = 0; i <= 5; i++)
        {
            if (i == 0)
            {
                cout << "\n"
                     << choicesThree[i] << "";
                cin >> termWeightThree;
            }

            if (i == 1)
            {
                cout << "\n"
                     << choicesThree[i] << "";
                cin >> termMarkThree;
            }

            if (i == 4)
            {
                cout << "\n\n"
                     << choicesThree[i] << "";
                cin >> examWeightThree;
            }
        }
        cout << "\n\nWhat Grade would you like in this course (%)?\n";
        cin >> expectedGradeThree;
    }
    else if (userChoiceThree == 2)
    {
        for (int i = 0; i <= 5; i++)
        {
            if (i == 0)
            {
                cout << "\n"
                     << choicesThree[i] << "";
                cin >> termWeightThree;
            }

            if (i == 1)
            {
                cout << "\n"
                     << choicesThree[i] << "";
                cin >> termMarkThree;
            }

            if (i == 2)
            {
                cout << "\n\n"
                     << choicesThree[i] << "";
                cin >> summativeWeightThree;
            }

            if (i == 3)
            {
                cout << "\n"
                     << choicesThree[i] << "";
                cin >> summativeMarkThree;
            }

            if (i == 4)
            {
                cout << "\n\n"
                     << choicesThree[i] << "";
                cin >> examWeightThree;
            }
        }
        cout << "\nWhat Grade would you like in this course (%)?\n";
        cin >> expectedGradeThree;
    }
    else
    {
        system("clear");
        int userChoiceThree;
        cout << " Error, Invalid Choice\n";
        cout << " Please re-input \n\n";
        cout << "\nPlease select an option that applies to you:\n";

        cout << "[1] Term Mark + Exam\n";
        cout << "[2] Term Mark + Summative + Exam\n\n";
        cin >> userChoiceThree;
    }
}

void calculate_RequiredGrade()
{
    if (userChoiceThree == 1)
    {
        termWeightAchievedThree = (termMarkThree / 100) * termWeightThree;
        termGradeThree = (termWeightAchievedThree / termWeightThree) * 100;

        examWeightRequiredThree = (termWeightAchievedThree / termWeightThree) * examWeightThree;
        examGradeThree = (examWeightRequiredThree / examWeightThree) * 100;
    }
    else if (userChoiceThree == 2)
    {
        termWeightAchievedThree = (termMarkThree / 100) * termWeightThree;
        summativeWeightAchievedThree = (summativeMarkThree / 100) * summativeWeightThree;

        totalWeightAchievedThree = termWeightAchievedThree + summativeWeightAchievedThree;
        totalWeightThree = termWeightThree + summativeWeightThree;

        examWeightRequiredThree = (totalWeightAchievedThree / totalWeightThree) * examWeightThree;
        examGradeThree = (examWeightRequiredThree / examWeightThree) * 100;
    }

    cout << "\n\nWhat is your exam out of?\n";
    cin >> examMarkOutOfThree;
}

void reply_RequiredGrade()
{
    cout << "\n\nTo achieve a " << expectedGradeThree << " in this course, you need to achieve a...\n";
    cout << "Exam Grade of: " << examGradeThree << " %\n";
    cout << "Exam Mark of: " << ((examGradeThree / 100) * examMarkOutOfThree) << "/" << examMarkOutOfThree << "\n";
    cout << "\n\n";
    system("read");
}