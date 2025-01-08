#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int mn=min(a,b);
    int mx=max({a,b,c,d,e});
    cout<<mn<<" "<<mx;
    return 0;
}