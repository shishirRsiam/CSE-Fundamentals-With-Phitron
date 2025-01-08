#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
	int roll;
	char section;
	int math_marks;
	int cls;
    Student(char name[],int roll,char section,int math_marks,int cls)
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
    cout<<"-----------------------------------\n";
    char S[100]="Sishir Siam";
    Student Sishir(S,10,'C',89,9);
    cout<<"Name: "<<Sishir.name<<"\nRoll: "<<Sishir.roll<<"\nSection: "<<Sishir.section<<"\nMath Marks: "<<Sishir.math_marks<<"\nClass: "<<Sishir.cls;
    cout<<"\n-----------------------------------\n";
    char S2[100]="Saad Ahmed";
    Student Saad(S2,6,'B',92,9);
    cout<<"Name: "<<Saad.name<<"\nRoll: "<<Saad.roll<<"\nSection: "<<Saad.section<<"\nMath Marks: "<<Saad.math_marks<<"\nClass: "<<Saad.cls;
    cout<<"\n-----------------------------------\n";
    char S3[100]="Tushar Ahmed";
    Student Tushar(S3,3,'A',90,9);
    cout<<"Name: "<<Tushar.name<<"\nRoll: "<<Tushar.roll<<"\nSection: "<<Tushar.section<<"\nMath Marks: "<<Tushar.math_marks<<"\nClass: "<<Tushar.cls;
    cout<<"\n-----------------------------------\n";
    // /*
    if(Sishir.math_marks>Tushar.math_marks && Sishir.math_marks>Saad.math_marks)
    {
        cout<<"Got highest number: "<<Sishir.name<<"\n";
    }
    if(Saad.math_marks > Sishir.math_marks && Saad.math_marks > Tushar.math_marks)
    {
        cout<<"Got highest number: "<<Saad.name<<"\n";
    }
    if(Tushar.math_marks>Sishir.math_marks && Tushar.math_marks>Saad.math_marks)
    {
        cout<<"Got highest number: "<<Tushar.name;
    }
    // cout<<Sishir_Marks<<" "<<Saad_Marks<<" "<<Tushar.math_marks<<"\n";
    // */
    // /*
    int Sishir_Marks = Sishir.math_marks;
    int Saad_Marks = Saad.math_marks;
    int Tushar_Marks = Tushar.math_marks;
    // cout<<Sishir_Marks<<" "<<Saad_Marks<<" "<<Tushar.math_marks<<"\n";
    cout<<"\n**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**\n";
    if (Sishir_Marks > Tushar_Marks && Sishir_Marks > Saad_Marks)
    {
        cout<<"Got highest number: "<<Sishir.name<<"\nMarks is: "<<Sishir_Marks;
    }
    if (Saad_Marks > Tushar_Marks && Saad_Marks > Sishir_Marks)
    {
        cout<<"Got highest number: "<<Saad.name<<"\nMarks is: "<<Saad_Marks;
    }
    if (Tushar_Marks > Saad_Marks && Tushar_Marks > Sishir_Marks)
    {
        cout<<"Got highest number: "<<Tushar.name<<"\n"<<Tushar.name<<" Marks is: "<<Tushar_Marks;
    }
    cout<<"\n**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**\n";
    // */
    return 0;
}

/*
output:
-----------------------------------
Name: Sishir Siam
Roll: 10
Section: C
Math Marks: 89
Class: 9
-----------------------------------
Name: Saad Ahmed
Roll: 6
Section: B
Math Marks: 92
Class: 9
-----------------------------------
Name: Tushar Ahmed
Roll: 3
Section: A
Math Marks: 95
Class: 9
-----------------------------------

**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**
Got highest number: Tushar Ahmed
Tushar Ahmed Marks is: 95
**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**
*/