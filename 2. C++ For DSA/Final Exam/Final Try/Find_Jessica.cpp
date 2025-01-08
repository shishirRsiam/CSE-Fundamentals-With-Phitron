#include<bits/stdc++.h>
using namespace std;
int main()
{
    string names;
    getline(cin,names);
    stringstream name(names);
    string word;
    int flag=0;
    while(name>>word)
    {
        if(word == "Jessica")
        {
            flag = 1;
        }
    }
    (flag == 0) ? cout<<"NO" : cout<<"YES";
    return 0;
}