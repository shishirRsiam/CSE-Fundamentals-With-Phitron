#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e; cin>>n>>e;
    vector<int> mat[n];
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }
    for(int v:mat[4])
        cout<<v<<" ";
    return 0;
}