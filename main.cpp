









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
{
//    Gpa Calculation Code 
        int n;
        float totalCredits = 0, totalPoints = 0;

        printf("Enter number of subjects: ");
        scanf("%d", &n);
        
        for (int i = 0; i < n; i++) {
                float grade, credit;
                printf("Enter grade and credit for subject %d: ", i + 1);
                scanf("%f %f", &grade, &credit);
                totalPoints += grade * credit;
                totalCredits += credit;
        }  
// Evaluating Gpa 
        int Gpa =0;
         if((totalPoints/totalCredits)>95){Gpa = 10; }
         else if ((totalPoints/totalCredits)>85){Gpa = 9;}
         else if ((totalPoints/totalCredits)>75){Gpa = 8;}
         else if ((totalPoints/totalCredits)>65){Gpa = 7;}
         else if ((totalPoints/totalCredits)>55){Gpa = 6;}
         else {Gpa = totalPoints/totalCredits;}
// Printing Gpa
    cout<<"\n\n\nTotal Points: "<<totalPoints<<" . Total Credits: "<<totalCredits<<" .Total GPA: "<<Gpa<<" ."<<endl;


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
    
        //    CGpa Calculation Code 
                int n;
                float totalCredits = 0, totalPoints = 0;

                printf("Enter number of Semesters: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                        float grade, credit;
                        printf("Enter grade and credit for Semester %d: ", i + 1);
                        scanf("%f %f", &grade, &credit);
                        totalPoints += grade * credit;
                        totalCredits += credit;
                }  
        // Evaluating CGpa 
                int CGpa =0;
                if((totalPoints/totalCredits)>95){CGpa = 10; }
                else if ((totalPoints/totalCredits)>85){CGpa = 9;}
                else if ((totalPoints/totalCredits)>75){CGpa = 8;}
                else if ((totalPoints/totalCredits)>65){CGpa = 7;}
                else if ((totalPoints/totalCredits)>55){CGpa = 6;}
                else {CGpa = totalPoints/totalCredits;}
        // Printing CGpa
        cout<<"\n\n\n Your CGPA is : "<<CGpa<<" ."<<endl;




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
