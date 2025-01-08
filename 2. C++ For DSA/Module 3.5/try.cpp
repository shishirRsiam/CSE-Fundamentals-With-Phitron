#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    char name[100];
	int roll;
	int section;
	int math_marks;
	int cls;
    student(char name[],int roll,int section,int math_marks,int cls)
    {
        strcpy(this->name,name);
        this->roll=roll;
        this->section=section;
        this->math_marks=math_marks;
        this->cls=cls;      
    }
};
int main()
{
    char aa[100]="Sishir Siam";
    char bb[100]="Saad Ahmmed";
    char cc[100]="Tushar Ahmed";
    student a(aa,10,2,97,10);
    student b(bb,13,1,91,10);
    student c(cc,9,1,90,10);
    // priint a student;
    cout<<"Name: "<<a.name << "\nRoll: " << a.roll << "\nSection: " << a.section << "\nMarks: " << a.math_marks <<"\nClass: "<<a.cls<<"\n\n";
    // print b student;
    cout<<"Name: "<<b.name << "\nRoll: " << b.roll << "\nSection: " << b.section << "\nMarks: " << b.math_marks <<"\nClass: "<<b.cls<<"\n\n";
    // print c student;
    cout<<"Name: "<<c.name << "\nRoll: " << c.roll << "\nSection: " << c.section << "\nMarks: " << c.math_marks <<"\nClass: "<<c.cls<<"\n\n";
    // find max marks!!
    int mx=max({a.math_marks,b.math_marks,c.math_marks});
    //check who got max number:
    if(mx==a.math_marks)
    {
        cout<<"Got highest number: "<<a.name<<"\n"<<a.name<<" Marks is: "<<a.math_marks;
    }
    if(mx==b.math_marks)
    {
        cout<<"Got highest number: "<<b.name<<"\n"<<b.name<<" Marks is: "<<b.math_marks;
    }
    if(mx==c.math_marks)
    {
        cout<<"Got highest number: "<<c.name<<"\n"<<c.name<<" Marks is: "<<c.math_marks;
    }
    return 0;
}

/*output:
Name: Sishir Siam
Roll: 10
Section: 2
Marks: 97
Class: 10

Name: Saad Ahmmed
Roll: 13
Section: 1
Marks: 91
Class: 10

Name: Tushar Ahmed
Roll: 9
Section: 1
Marks: 90
Class: 10

Got highest number: Sishir Siam
Sishir Siam Marks is: 97
*/