#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    switch(n)
    {
        case 1: cout<<"Sunday"<<endl;
        case 2: cout<<"Monday"<<endl;
        case 3: cout<<"Tuesday"<<endl;
        case 4: cout<<"Wednesday"<<endl;
        case 5: cout<<"Thusday"<<endl;
        case 6: cout<<"Friday"<<endl;
        case 7: cout<<"Satureday"<<endl;
        default: cout<<"Out of Week."<<endl;
    }
    return 0;
}