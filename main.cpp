
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
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                    GPA & CGPA Calculator                                  "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calclating GPA & CGPA"<<endl;
    cout<<"                   4. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    sub:
    cout<<"Enter your choice: ";
    cin>>input;
    switch(input)
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
            cout<<"You have entered wrong input.Try again!\n"<<endl;
            goto sub;
            break;
    }
}

void calculateGPA()
{ int numSub;
    float tPoints=0.0,tCredits=0.0;
    cout<<"Enter No. of subjects: ",cin>>numSub;
    int credit[numSub];
    float GradePoint[numSub];
    for(int i=0; i<numSub; i++){
        cout << "Enter credits for subject " << i + 1 << ": ";
        cin >> credit[i];
        cout << "Enter grade points for subject " << i + 1 << ": ";
        cin >> GradePoint[i];
        tPoints +=(credit[i] * GradePoint[i]);
        tCredits += credit[i];
    }
    float gpa = (tCredits == 0) ? 0 : tPoints / tCredits;
    
    cout<<"\n\n\nTotal Points: "<<tPoints<<" . Total Credits: "<<tCredits<<" .Total GPA: "<<gpa<<" ."<<endl;
    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
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
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}
void calculateCGPA()
{
    system("clear");
    int l;
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<"Please implement calculate CGPA and your output should be as follows"<<endl;

    cout<<"******** Your CGPA is "<<"semtot/l"<<" **********"<<endl;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
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
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }

}

void method()
{
    system("clear");
    cout<<"--------------- Method of Calculating GPA & CGPA ---------------\n\n"<<endl;
    cout<<" GPA= Sum of (Credit*Point) / total of credits \n"<<endl;
    cout<<" CGPA=  Sum of GPA / number of semesters "<<endl;
    cout<<"-----------------------------------------------------------------\n\n"<<endl;

    sub:
    int inmenu;
    cout<<"1. Go Back to Main Menu"<<endl;
    cout<<"2. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                main();
                break;
        case 2:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
};
