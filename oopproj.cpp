#include<iostream>
using namespace std;
class GPA{
    private:
    int p1,p2,p3,p4,p5,p6;  // store points
    int oop,dld,pas,pst,eng,mvc;
    float gpa;
    float points;
    float c_hours;
    public:
    GPA(){
        c_hours=19;
    }
    void get(){
        cout<<"OOP = ";
        cin>>oop;
        cout<<"DLD = ";
        cin>>dld;
        cout<<"MVC = ";
        cin>>mvc;
        cout<<"ENG = ";
        cin>>eng;
        cout<<"PAS = ";
        cin>>pas;
        cout<<"PST = ";
        cin>>pst;
    }
    void OOP(){
        cout<< "##########   GRADES   ##########"<<endl;
        if(oop>=64){
            cout<<"GRADE A"<<endl;
            p1=16.00;
        }
        else if(oop>=52 && oop<64){
            cout<<"GRADE B"<<endl;
            p1=12.00;
        }
        else if(oop>=40 && oop<52){
            cout<<"GRADE C"<<endl;
            p1=8.00;
        }
        else if(oop>=32 && oop<40){
            cout<<"GRADE D"<<endl;
            p1=4.00;
        }
        else {
            cout<<"fail"<<endl;
            p1=0.00;
        }
    }
     void DLD(){
        if(dld>=64){
            cout<<"GRADE A"<<endl;
            p2=16.00;
        }
        else if(dld>=52 && dld<64){
            cout<<"GRADE B"<<endl;
            p2=12.00;
        }
        else if(dld>=40 && dld<52){
            cout<<"GRADE C"<<endl;
            p2=8.00;
        }
        else if(dld>=32 && dld<40){
            cout<<"GRADE D"<<endl;
            p2=4.00;
        }
        else {
            cout<<"fail"<<endl;
            p2=0.00;
        }
    }
    void MVC(){
        if(mvc>=64){
            cout<<"GRADE A"<<endl;
            p3=12.00;
        }
        else if(mvc>=52 && mvc<64){
            cout<<"GRADE B"<<endl;
            p3=9.00;
        }
        else if(mvc>=40 && mvc<52){
            cout<<"GRADE C"<<endl;
            p3=6.00;
        }
        else if(mvc>=32 && mvc<40){
            cout<<"GRADE D"<<endl;
            p3=3.00;
        }
        else {
            cout<<"fail"<<endl;
            p3=0.00;
        }
    }
      void PAS(){
        if(pas>=64){
            cout<<"GRADE A"<<endl;
            p4=12.00;
        }
        else if(pas>=52 && pas<64){
            cout<<"GRADE B"<<endl;
            p4 =9.00;
        }
        else if(pas>=40 && pas<52){
            cout<<"GRADE C"<<endl;
            p4=6.00;
        }
        else if(pas>=32 && pas<40){
            cout<<"GRADE D"<<endl;
            p4=3.00;
        }
        else {
            cout<<"fail"<<endl;
            p4=0.00;
        }
    }
      void ENG(){
        if(eng>=64){
            cout<<"GRADE A"<<endl;
            p5=12.00;
        }
        else if(eng>=52 && eng<64){
            cout<<"GRADE B"<<endl;
            p5=9.00;
        }
        else if(eng>=40 && eng<52){
            cout<<"GRADE C"<<endl;
            p5=6.00;
        }
        else if(eng>=32 && eng<40){
            cout<<"GRADE D"<<endl;
            p5=4.00;
        }
        else {
            cout<<"fail"<<endl;
            p5=0.00;
        }
    }
      void PST(){
        if(pst>=32){
            cout<<"GRADE A"<<endl;
            p6=8.00;
        }
        else if(pst>=26 && pst<32){
            cout<<"GRADE B"<<endl;
            p6=6.00;
        }
        else if(pst>=20 && pst<26){
            cout<<"GRADE C"<<endl;
            p6=4.00;
        }
        else if(pst>=16 && pst<20){
            cout<<"GRADE D"<<endl;
            p6=200;
        }
        else {
            cout<<"fail"<<endl;
            p6=0.00;
        }
    }
    void calc(){
        points=p1+p2+p3+p4+p5+p6;
        gpa=(points)/(c_hours);
    }
    void display(){
        cout<<"##########   GPA   ##########"<<endl;
        cout<<"GPA = "<<gpa<<endl;
    }
};
int main (){
    GPA a;
    a.get();
    a.OOP();
    a.DLD();
    a.MVC();
    a.PAS();
    a.ENG();
    a.PST();
    a.calc();
    a.display();
    

}