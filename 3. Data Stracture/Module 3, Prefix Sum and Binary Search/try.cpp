#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    vector<long long int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int prefix[n];
    prefix[0]=a[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=a[i]+prefix[i-1];
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<prefix[i]<<" ";
    // }
    // cout<<endl;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        a--,b--;
        long long int sum = 0;
        if(a==0) sum = prefix[b];
        else sum = prefix[b] - prefix[a-1];
        cout<<sum<<endl;
    }
    return 0;
}