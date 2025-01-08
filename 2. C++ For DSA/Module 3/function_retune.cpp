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
Student fun()
{
    Student Rahim(12,9,4.99);
    return Rahim;
}
int main()
{
    Student ans=fun();
    cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa;
    return 0;
}