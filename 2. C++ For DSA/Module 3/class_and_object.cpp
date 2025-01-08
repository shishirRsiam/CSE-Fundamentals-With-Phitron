#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    double cgpa;
    long long int phone;
};
int main()
{
    Student a,b;
    cin.getline(a.name,100);
    cin>>a.roll>>a.cgpa>>a.phone;
    getchar();
    cin.getline(b.name,100);
    cin>>b.roll>>b.cgpa>>b.phone;

    cout<<"Name: "<<a.name<<"\nRoll: "<<a.roll<<"\nCGPA: "<<a.cgpa<<"\nPhone Number: "<<a.phone;
    cout<<"\n\n";
    cout<<"Name: "<<b.name<<"\nRoll: "<<b.roll<<"\nCGPA: "<<b.cgpa<<"\nPhone Number: "<<b.phone;
    return 0;
}
/* input:
Sishir Siam 
49 3.88 8801317129349
Fatema Akter
98 3.99 8801856182998

output:
Name: Sishir Siam 
Roll: 49
CGPA: 3.88
Phone Number: 8801317129349

Name: Fatema Akter
Roll: 98
CGPA: 3.99
Phone Number: 8801856182998
*/