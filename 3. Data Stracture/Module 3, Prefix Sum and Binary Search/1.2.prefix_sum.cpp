#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=a[i]+pre[i-1];
    }
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        x--,y--;
        long long int sum = 0;
        if(x==0)
        {
            sum = pre[y];
        }
        else
        {
            sum = pre[y]-pre[x-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}