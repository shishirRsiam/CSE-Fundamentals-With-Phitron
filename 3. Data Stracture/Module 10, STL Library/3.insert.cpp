#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>MyList={10,20,30,40,50};
    MyList.insert(next(MyList.begin(),2),100);
    MyList.erase(next(MyList.begin(),2),next(MyList.begin(),5));
    list<int>NewList={10,10,10,20,30,50,40,10};
    MyList.insert(next(MyList.begin(),3),NewList.begin(),NewList.end());
    replace(MyList.begin(),MyList.end(),10,100); // prothome replace funtion call, then kotha theke suru and sesh korbo tar pointer and pore kon vallue replace kore ki dibo seta...
    for(int vall:MyList)
    {
        cout<<vall<<" ";
    }
    cout<<endl;
    auto it = find(MyList.begin(),MyList.end(),100);
    if(it==MyList.end())
    {
        cout<<"Not Found!\n";
    }
    else
    {
        cout<<"Found.\n";
    }
    return 0;
}