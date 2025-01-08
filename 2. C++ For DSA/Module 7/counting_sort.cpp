#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
    // sort(name.begin(),name.end());
    // cout<<name;
    int frq[26]={0};
    for(char c:name)
    {
        frq[c-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        for(int j=0;j<frq[i-'a'];j++)
        cout<<i;
    }
    return 0;
}