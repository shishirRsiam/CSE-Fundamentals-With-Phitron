#include<bits/stdc++.h>
using namespace std;
int * fun(int *a)
{
    cout<<"Fun Funtion 'a' Address: " <<a<<"\n";
    int *ar = new int[*a];
    cout<<"Fun Funtion Array: ";
    for (int i=0;i<*a;i++)
    {
        cin>>ar[i];
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
    return ar;
}
int main()
{
    int *a =new int;
    cin>>*a;
    cout<<"Main Funtion 'a' Address: " <<a<<"\n";
    int * ret = fun(a);
    cout<<"Main Funtion Array: ";
    for(int i=0;i<*a;i++)
    {
        cout<<ret[i]<<" ";
    }
    return 0;
}
/*
output:
Main Funtion 'a' Address: 0xf6b0f0
Fun Funtion 'a' Address: 0xf6b0f0
Fun Funtion Array: 1 2 3 4 5 
Main Funtion Array: 1 2 3 4 5 
*/