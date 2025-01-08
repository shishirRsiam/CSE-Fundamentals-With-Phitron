#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>MyList(5,100);
    list<int>Second_list(MyList);
    cout<<MyList.size()<<endl;
    cout<<"Print From Itarator: ";
    for(auto it=MyList.begin();it!=MyList.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Print From Range Based Loop: ";
    for(int vall:Second_list)
    {
        cout<<vall<<" ";
    }
    return 0;
}