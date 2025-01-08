#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double cgp;
    Student(int roll,int cls,double cgp)
    {
        (*this).roll=roll;
        this->cls=cls;
        this->cgp=cgp;
    }
};
int main()
{
    Student Sishir(49,9,4.55);
    /*
    Sishir.roll=49;
    Sishir.cls=12;
    Sishir.cgp=4.89;
    */
    cout<<Sishir.roll<<" "<<Sishir.cls<<" "<<Sishir.cgp<<"\n";
    Student Siam(62,7,5.01);
    /*
    Siam.roll=62;
    Siam.cls=12;
    Siam.cgp=4.99;
    */
    cout<<Siam.roll<<" "<<Siam.cls<<" "<<Siam.cgp;
    return 0;
}