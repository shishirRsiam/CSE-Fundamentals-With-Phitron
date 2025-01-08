#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e; cin>>n>>e;
    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a][b]=1;
        // mat[b][a]=1;
    }

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //         cout<<mat[i][j]<<" ";
    //     cout<<endl;
    // }

    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        if(a==b) cout<<"YES\n";
        else mat[a][b]==1 ? cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}