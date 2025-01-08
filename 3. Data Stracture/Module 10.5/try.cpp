#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,d1,d2;
    cin>>x>>d1>>d2;
    int ans = ceil((x * d1) / d2);
    cout<<ans;
    return 0;
}