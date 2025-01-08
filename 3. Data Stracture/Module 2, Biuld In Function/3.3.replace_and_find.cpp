#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,2,5,6,7,2,3,4,2};
    replace(v.begin(),v.end()-1,2,99);
    for(int c:v)
    {
        cout<<c<<" ";
    }
    cout<<endl;
    // vector<int>:: iterator it;
    auto it = find(v.begin(),v.end(),99);
    cout<<*it<<endl;
    (it==v.end()) ? cout<<"NOT Found.\n" : cout<<"Found.\n"; 
    return 0;
}