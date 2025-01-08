#include<bits/stdc++.h>
using namespace std;
int * fun(int *a)
{
    int *ar=new int[*a];
    for (int i=0;i<*a;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+*a);
    return ar;
}
int main()
{
    int *a=new int;
    cin>>*a;
    int * ret=fun(a);
    for (int i=0;i<*a;i++)
    {
        cout<<ret[i]<<" ";
    }
    return 0;
}
