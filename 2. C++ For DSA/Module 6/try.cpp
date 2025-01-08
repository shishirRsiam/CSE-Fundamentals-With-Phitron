#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int a_mul=0;
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]*a[i+1];
    }
    cout<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<b[i]*b[i+1];
    }
    return 0;
}