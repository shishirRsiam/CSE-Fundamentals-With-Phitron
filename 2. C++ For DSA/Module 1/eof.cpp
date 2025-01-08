#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;
    // C diye EOF!
    while(scanf("%d %d",&a,&b) != EOF)
    {
        printf("%d %d\n",a,b);
    }

    //C++ diye EOF!
    while(cin>>a>>b)
    {
        cout<<a<<" "<<b<<endl;
    }
}