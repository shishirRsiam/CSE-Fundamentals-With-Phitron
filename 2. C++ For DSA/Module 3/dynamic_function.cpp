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
Student* fun()
{
    Student *Rahim = new Student(4,5,4.44);
    return Rahim;
}
int main()
{
    Student *Rahim = fun();
    cout<<Rahim->roll<<" "<<Rahim->cls<<" "<<Rahim->gpa;
    return 0;
}