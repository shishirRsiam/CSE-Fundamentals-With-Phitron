#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int pre[n];
    pre[0]=a[0];
    for(int i=1;i<n;i++)
    {
        pre[i] = pre[i-1]+a[i];
    }
    reverse(pre,pre+n);
    for(int i=0;i<n;i++)
    {
        cout<<pre[i]<<" ";
    }
    return 0;
}