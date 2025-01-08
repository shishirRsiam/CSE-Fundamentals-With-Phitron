#include<bits/stdc++.h>
using namespace std;
namespace Siam
{
    string name = "Siam";
    int age = 20;
    void printSiam()
    {
        cout<<"Name: "<<name<<"\nAge: "<<age<<endl;
    }
}
namespace Sishir
{
    string name = "Sishir";
    int age = 19;
    void printSishir()
    {
        cout<<"Name: "<<name<<"\nAge: "<<age<<endl;
    }
}
using namespace Siam;
using namespace Sishir;
int main()
{
    printSiam();
    printSishir();
    return 0;
}