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
    // sort(a,a+n);
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(a[i]>a[j])
    //         {
    //             int tmp = a[i];
    //             a[i]=a[j];
    //             a[j]=tmp;
    //         }
    //     }
    // }
    int i=0;
    int j=n-1;
    while(i<j)
    {
        int tmp =a[i];
        a[i]=a[j];
        a[j]=tmp;
        i++,j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
/*
input: 5
6 8 4 10 2
output:
2 4 6 8 10 
*/