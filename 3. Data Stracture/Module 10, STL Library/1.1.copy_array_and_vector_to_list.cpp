#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a[5]={10,20,30,40,50};
    // list<int>MyList(a,a+5);

    vector<int>v={10,20,30,40,50};
    list<int>MyList(v.begin(),v.end());

    cout<<"Print From Itarator: ";
    for(auto it=MyList.begin();it!=MyList.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Print From Range Based Loop: ";
    for(int vall:MyList)
    {
        cout<<vall<<" ";
    }
    return 0;
}