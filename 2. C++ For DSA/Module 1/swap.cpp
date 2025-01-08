#include<iostream>
#include<utility>
using namespace std;
void fun(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
    // cout<<a<<" "<<b<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    // int tmp=a;
    // a=b;
    // b=tmp;
    // cout<<a<<b;
    // fun(&a,&b);
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}