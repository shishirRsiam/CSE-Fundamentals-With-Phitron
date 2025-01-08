#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string n;
    cin>>n;
    int sum1=n[0]+n[1]+n[2];
    int sum2=n[3]+n[4]+n[5];
    (sum1==sum2) ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}