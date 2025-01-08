#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>MyList={10,20,30,40,50};
    list<int>NewList;
    NewList=MyList;
    for(int vall:NewList)
    {
        cout<<vall<<" ";
    }
    cout<<endl;
    NewList.push_back(100);
    NewList.push_back(100);
    NewList.push_front(500);
    NewList.push_front(500);
    NewList.pop_back();
    NewList.pop_front();
    for(int vall:NewList)
    {
        cout<<vall<<" ";
    }
    return 0;
}