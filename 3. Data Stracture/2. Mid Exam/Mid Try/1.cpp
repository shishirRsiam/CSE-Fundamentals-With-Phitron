#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>a;
    while(true)
    {
        int v; cin>>v;
        if(v==-1) break;
        a.push_back(v);
    }
    a.sort(); a.unique();
    for(int v:a)
    {
        cout<<v<<" ";
    }
    return 0;
}