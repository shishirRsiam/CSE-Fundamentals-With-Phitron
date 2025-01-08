#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    cout<<name<<endl;
    stringstream names(name);
    string word;
    names>>word;
    cout<<word<<endl;
    names>>word;
    cout<<word<<endl;
    while(names>>word)
    {
        cout<<word<<endl;
    }
    return 0;
}