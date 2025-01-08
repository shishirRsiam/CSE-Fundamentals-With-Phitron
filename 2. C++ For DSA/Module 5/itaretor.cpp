#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name = "Sishir";
    // int len = name.length();
    // cout<<len<<endl;
    // for (int i=0;i<len;i++)
    // {
    //     cout<<name[i]<<endl;
    // }
    cout<<*name.begin()<<endl;
    cout<<*name.end()<<endl;
    cout<<*(name.end()-1)<<endl;
    // for(string:: iterator it=name.begin();it<name.end();it++)
    for(auto it=name.begin();it<name.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}