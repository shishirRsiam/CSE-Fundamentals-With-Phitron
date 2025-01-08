#include<bits/stdc++.h>
using namespace std;

void print_l_(list<int>& myList)
{
    cout<<"L -> ";
    for(int val:myList)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}

void print_r_(list<int>& myList)
{
    cout<<"R -> ";
    list<int>aa;
    for(int val:myList)
    {
        aa.push_front(val);
    }
    for(int aaa:aa)
    {
        cout<<aaa<<" ";
    }
    cout<<endl;
}


int size_(list<int>& myList)
{
    int sz=0;
    for(int val:myList)
    {
        sz++;
    }
    return sz;
}

void delete_pos(list<int>& myList,int k)
{
    myList.erase(myList.begin(),k);
}

int main()
{
    list<int>MyList;
    int t;
    cin>>t;
    while(t--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos==0)
        {
            MyList.push_front(val);
        }
        else if(pos==1)
        {
            MyList.push_back(val);
        }
        else if(pos==2)
        {
            if(val==0)
            {
                MyList.pop_front();
            }
            else if(val==size_(MyList))
            {
                MyList.pop_back();
            }
            else 
            {
                delete_pos(MyList,val);
            }
        }
        print_l_(MyList);
        print_r_(MyList);
    }
    return 0;
}