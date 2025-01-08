#include<bits/stdc++.h>
using namespace std;
int main()
{
    string names;
    getline(cin,names);
    stringstream name(names);
    string nm;
    bool flag = false;
    while(name>>nm)
    {
        if(nm=="Ratul")
        {
            flag = true;
        }
    }
    flag ? cout<<"YES" : cout<<"NO";
    return 0;
}