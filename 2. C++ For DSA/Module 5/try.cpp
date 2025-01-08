#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        // cout<<a[i];
    }
    for(int i=1;i<n;i++)
    {
        if(i != a[i])
        {
            cout<<i;
        }
    }
    return 0;
}