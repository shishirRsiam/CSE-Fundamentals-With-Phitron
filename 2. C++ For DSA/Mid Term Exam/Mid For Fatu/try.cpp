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
    sort(a,a+n);
    int min=a[0];
    int maxx=a[n-1];
    int ress=maxx+abs(min);
    cout<<"Result = "<<ress;
    return 0;
}