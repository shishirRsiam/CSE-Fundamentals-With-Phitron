#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
    cout<<name<<endl;
    int len = name.length();
    int len1 = name.size();
    for(int i=0;i<name.length();i++)
    {
        cout<<name[i]<<" ";
    }
    cout<<endl;
    for(char c:name)
    {
        cout<<c<<" ";
    }
    return 0;
}