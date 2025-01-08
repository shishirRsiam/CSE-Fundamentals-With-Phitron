#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector<char> a;
    char input;
    while (cin >> input) 
    {
        a.push_back(input);
    }
    vector<int>fre(26,0);
    for(int i=0;i<a.size();i++)
    {
        int val = a[i]-'a';
        fre[val]++;
    }
    for(int i=0;i<fre.size();i++)
    {
        if(fre[i] != 0)
        {
            cout<<char(i+'a')<<" : "<<fre[i]<<endl;
        }
    }
    return 0;
}