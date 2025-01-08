#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c,b;
    cin>>c>>b;
    swap(c,b);
    cout<<c<<b<<"\n";
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<"\n";

    return 0;
}