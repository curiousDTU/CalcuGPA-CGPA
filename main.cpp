#include <iostream>
#include <stdlib.h>

using namespace std;

void calculateGPA();
void calculateCGPA();
void method();

int main()
{
    system("clear");
    int input;
    cout << "--------------------------------------------------------------------------" << endl;
    cout << "                    GPA & CGPA Calculator                                  " << endl;
    cout << "--------------------------------------------------------------------------\n" << endl;
    cout << "            MENU:" << endl;
    cout << "                   1. Calculate GPA (Grade Point Average)" << endl;
    cout << "                   2. Calculate CGPA (Cummulative Grade Point Average)" << endl;
    cout << "                   3. Method that is applied here for calculating GPA & CGPA" << endl;
    cout << "                   4. Exit Application" << endl;
    cout << "--------------------------------------------------------------------------" << endl;

sub:
    cout << "Enter your choice: ";
    cin >> input;
    switch (input)
    {
    case 1:
        calculateGPA();
        break;

    case 2:
        calculateCGPA();
        break;
    case 3:
        method();
        break;
    case 4:
        exit(EXIT_SUCCESS);
        break;
    default:
        cout << "You have entered wrong input. Try again!\n" << endl;
        goto sub;
        break;
    }
}

void calculateGPA()
{
    system("clear");
    int numCourses;
    double totalPoints = 0, totalCredits = 0;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    for (int i = 0; i < numCourses; ++i)
    {
        double gradePoint, credit;
        cout << "Enter grade point for course " << i + 1 << ": ";
        cin >> gradePoint;
        cout << "Enter credit for course " << i + 1 << ": ";
        cin >> credit;

        totalPoints += gradePoint * credit;
        totalCredits += credit;
    }

    double GPA = (totalCredits > 0) ? totalPoints / totalCredits : 0;
    cout << "\n\nTotal Points: " << totalPoints << " . Total Credits: " << totalCredits << " . Total GPA: " << GPA << " ." << endl;

sub:
    int inmenu;
    cout << "\n\n\n1. Calculate Again" << endl;
    cout << "2. Go Back to Main Menu" << endl;
    cout << "3. Exit This App \n\n" << endl;
    cout << "Your Input: " << endl;
    cin >> inmenu;

    switch (inmenu)
    {
    case 1:
        calculateGPA();
        break;
    case 2:
        main();
        break;
    case 3:
        exit(EXIT_SUCCESS);

    default:
        cout << "\n\nYou have Entered Wrong Input! Please Choose Again!" << endl;
        goto sub;
    }
}

void calculateCGPA()
{
    system("clear");
    int semesters;
    double totalGPA = 0;

    cout << "Enter the number of semesters: ";
    cin >> semesters;

    for (int i = 0; i < semesters; ++i)
    {
        double GPA;
        cout << "Enter GPA for semester " << i + 1 << ": ";
        cin >> GPA;

        totalGPA += GPA;
    }

    double CGPA = (semesters > 0) ? totalGPA / semesters : 0;
    cout << "\n******** Your CGPA is " << CGPA << " **********" << endl;

sub:
    int inmenu;
    cout << "\n\n\n1. Calculate Again" << endl;
    cout << "2. Go Back to Main Menu" << endl;
    cout << "3. Exit This App \n\n" << endl;
    cout << "Your Input: " << endl;
    cin >> inmenu;

    switch (inmenu)
    {
    case 1:
        calculateCGPA();
        break;
    case 2:
        main();
        break;
    case 3:
        exit(EXIT_SUCCESS);

    default:
        cout << "\n\nYou have Entered Wrong Input! Please Choose Again!" << endl;
        goto sub;
    }
}

void method()
{
    system("clear");
    cout << "--------------- Method of Calculating GPA & CGPA ---------------\n\n" << endl;
    cout << " GPA = Sum of (Credit * Grade Point) / Total of Credits \n" << endl;
    cout << " CGPA = Sum of GPA / Number of Semesters " << endl;
    cout << "-----------------------------------------------------------------\n\n" << endl;

sub:
    int inmenu;
    cout << "1. Go Back to Main Menu" << endl;
    cout << "2. Exit This App \n\n" << endl;
    cout << "Your Input: " << endl;
    cin >> inmenu;

    switch (inmenu)
    {
    case 1:
        main();
        break;
    case 2:
        exit(EXIT_SUCCESS);

    default:
        cout << "\n\nYou have Entered Wrong Input! Please Choose Again!" << endl;
        goto sub;
    }
};
