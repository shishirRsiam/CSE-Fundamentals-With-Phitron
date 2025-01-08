#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>MyList={10,20,30,40,50};
    cout<<MyList.max_size()<<endl;
    MyList.clear();
    for(int vall:MyList)
    {
        cout<<vall<<" ";
    }
    return 0;
}