#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        // cout<<a[i]<<" ";
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        // cout<<b[i]<<" ";
        if (find(a.begin(),a.end(),b[i]) != a.end())
        {
            cout<<"found\n";
        }
        else
        {
            cout<<"not found\n";
        }
    }

    return 0;
}