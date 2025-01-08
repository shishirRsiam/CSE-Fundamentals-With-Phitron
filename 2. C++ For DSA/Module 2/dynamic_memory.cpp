#include <bits/stdc++.h>
using namespace std;
int * fun()
{
    cout<<"\n";
    int *a=new int;
    cin>>*a;
    cout<<*a<<"\n";
    int *aa=new int[*a];
    for (int i=0;i<*a;i++)
    {
        cin>>aa[i];
        cout<<aa[i]<<" ";
    }
    cout<<"\n";
    return aa;
}
int main()
{
    int *a = new int;
    cin>> *a;
    cout<<*a<<"\n";
    int *ar=new int[*a];
    for (int i=0;i<*a;i++)
    {
        cin>>ar[i];
        cout<<ar[i]<<" ";
    }
    int *s=fun();
    for (int i=0;i<3;i++)
    {
    cout<<s[i]<<" ";
    }
}