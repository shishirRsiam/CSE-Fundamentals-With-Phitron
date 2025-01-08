#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int feq[26]={0};
    for(int i=0;i<a.size();i++)
    {
        int val = a[i]-'a';
        feq[val]++;
    }
    for(int i=0;i<26;i++)
    {
        if(feq[i] != 0)
        cout<<char(i+'a')<<" : "<<feq[i]<<endl;
    }
    return 0;
}