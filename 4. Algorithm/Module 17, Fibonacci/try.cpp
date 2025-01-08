#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e; cin>>n>>e;
    vector<int>mat[n];
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    for(int i=0;i<n;i++)
    {
        // cout<<i<<" -> ";
        for(auto x:mat[i])
        {
            // cout<<x<<" ";
            mat[x].erase(remove(mat[x].begin(),mat[x].end(),i));
        }
        // cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(auto x:mat[i])
        {
            cout<<x<<" ";
            // mat[x].erase(remove(mat[x].begin(),mat[x].end(),i));
        }
        cout<<endl;
    }
    return 0;
}