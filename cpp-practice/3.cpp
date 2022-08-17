
#include <iostream>
using namespace std;
int main() {
    char name[10];
    int marks1,marks2,marks3,first,sec;
    float avg,tot;
    cout<<"Enter student name:";
    cin>>name;
    cout<<"Enter the marks in 3 subjects(out of 100):";
    cin>>marks1>>marks2>>marks3;
    tot=marks1+marks2+marks3;
    avg=tot/3;
    if(marks1>marks2 && marks1>marks3)
    {
        first=marks1;
        if(marks2>marks3)
        {
            sec=marks2;
        }
        else
        {
            sec=marks3;
        }
    }
    else if(marks2>marks1 && marks2>marks3)
    {
        first=marks2;
        if(marks1>marks3)
        {
            sec=marks1;
        }
        else
        {
            sec=marks3;
        }
    }
    else
    {
        first=marks3;
        if(marks1>marks2)
        {
            sec=marks1;
        }
        else
        {
            sec=marks2;
        }
    }
    cout<<"__Report__"<<endl<<"Name:"<<name<<endl;
    cout<<"Marks:"<<marks1<<" "<<marks2<<" "<<marks3<<endl;
    cout<<"First highest:"<<first<<endl<<"Second highest:"<<sec<<endl;
    cout<<"Total marks:"<<tot<<endl<<"Score:"<<avg<<"%"<<endl;
    cout<<"Completion Class: ";
    if(avg>=60)
    {
        cout<<"First Class";
    }
    else if(avg>=50 && avg<60)
    {
        cout<<"Second Class";
    }
    else if(avg>=35 && avg<50)
    {
        cout<<"Pass Class";
    }
    else
    {
        cout<<"Fail";
    }
    
    return 0;
}