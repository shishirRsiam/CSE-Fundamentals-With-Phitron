#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>MyList;
    while(true)
    {
        int vall;
        cin>>vall;
        if(vall==-1) break;
        MyList.push_back(vall);
    }
    MyList.sort();
    MyList.unique();
    for(int s:MyList)
    {
        cout<<s<<" ";
    }
    return 0;
}