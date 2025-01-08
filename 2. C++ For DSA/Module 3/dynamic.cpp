#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }
};
int main()
{
    int roll,cls;
    double gpa;
    cin>>roll>>cls>>gpa;
    Student *Rahim=new Student(roll,cls,gpa);
    getchar();
    char a[100];
    cin.getline(a,100);
    long long int num;
    cin>>num;
    cout<<"Name: "<<a<<"\nRoll: "<<Rahim->roll<<"\nClass: "<<Rahim->cls<<"\nGPA: "<<Rahim->gpa<<"\nNumber: "<<num;
    return 0;
}
/*
input:
4 9 4.98
Sishir Siam
8801317129349
*/

/*
output:
Name: Sishir Siam
Roll: 4
Class: 9
GPA: 4.98
Number: 8801317129349
*/