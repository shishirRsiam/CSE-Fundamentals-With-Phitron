#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>MyList={10,10,10,20,30,50,20,40,10};
    // MyList.remove(10);
    MyList.sort(greater<int>());
    MyList.unique();
    MyList.reverse(); 
    for(int vall:MyList)
    {
        cout<<vall<<" ";
    }
    return 0;
}