#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int sum=a+b;
    long long int multi=a*b;
    long long int sub=a-b;
    cout<<a<<" + "<<b<<" = "<<sum<<"\n";
    cout<<a<<" * "<<b<<" = "<<multi<<"\n";
    cout<<a<<" - "<<b<<" = "<<sub;
    return 0;
}