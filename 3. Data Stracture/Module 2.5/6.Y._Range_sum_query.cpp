#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        // cout<<a[i]<<" ";
    }
    // cout<<endl;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        // cout<<x<<" "<<y<<endl;
        int sum = 0;
        for(int i=x-1;i<y;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}