#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e; cin>>n>>e;
    vector<pair<int,int>>mat;
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat.push_back({a,b});
    }
    for(auto x:mat)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}