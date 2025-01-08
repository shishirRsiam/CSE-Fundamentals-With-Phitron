#include<bits/stdc++.h>
using namespace std;
int * sort_it(int n)
{
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<a[i];
    }
}
int main()
{
    int *a = new int;
    cin>>*a;
    int * res = sort_it(*a);
    return 0;
}