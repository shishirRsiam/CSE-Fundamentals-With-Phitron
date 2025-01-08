#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,6,7};
    v.erase(v.begin()+1,v.begin()+4);
    for(int c:v)
    {
        cout<<c<<" ";
    }
    return 0;
}