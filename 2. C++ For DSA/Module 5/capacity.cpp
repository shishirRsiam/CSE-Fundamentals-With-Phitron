#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    string name = "Sishir Siam";
    cout<<name<<endl;
    cout<<name.size()<<endl;
    cout<<name.length()<<endl;
    // cout<<name.max_size()<<endl;
    name.clear();
    cout<<name<<endl;
    cout<<name.size()<<endl;
    cout<<name.length()<<endl;
    (name.empty()==true) ? cout<<"emty" : cout<<name<<endl;
    */

    string name = "SishirSiam";
    cout<<name<<"\n"<<name.length()<<endl;
    name.resize(6);
    cout<<name<<"\n"<<name.length()<<endl;
    name.resize(8,'A');
    cout<<name<<"\n"<<name.length()<<endl;

    return 0;
}