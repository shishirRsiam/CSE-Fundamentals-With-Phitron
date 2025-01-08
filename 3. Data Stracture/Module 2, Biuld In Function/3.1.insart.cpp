#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={10,20,30};
    v.insert(v.begin()+1,60);
    vector<int>v2={100,200,300};
    v.insert(v.begin()+3,v2.begin(),v2.end());
    for(int c:v)
    {
        cout<<c<<" ";
    }
    return 0;
}