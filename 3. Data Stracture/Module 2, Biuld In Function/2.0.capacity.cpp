#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    cout<<v.capacity()<<endl;
    v.push_back(10);
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;

    return 0;
}