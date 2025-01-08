#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, m = 10;
    cin>>n>>m;
    vector<int>v(n,m);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    
    vector<int>v2(v);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v2[i]<<" ";
    }

    int a[6]={10,20,30,40,50,60};
    vector<int>v3(a,a+6);
    cout<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<v3[i]<<" ";
    }
    return 0;
}