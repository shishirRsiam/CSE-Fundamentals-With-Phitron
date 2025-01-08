#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string>myList;
    while(true)
    {
        string n; cin>>n;
        if(n=="end") break;
        myList.push_back(n);
    }
    int n; cin>>n;
    auto cur=myList.begin();
    while(n--)
    {
        string c; cin>>c;
        if(c=="visit")
        {
            string w; cin>>w;
            bool flag = false;
            for(auto i: myList)
            {
                if(i==w)
                {
                    flag = true;
                    *cur = i;
                    break;
                }
            }
            flag ? cout<<*cur<<endl:cout<<"Not Available\n";
        }
        else if(c=="next")
        {
            
            if(cur==myList.end())
            {
                cout<<"Not Available\n";
            }
            else 
            {
                cur++;
                cout<<*cur<<endl;
            }
        }
        else 
        {
            cur--;
            if(cur==myList.end())
            {
                cout<<"Not Available\n";
            }
            else 
            {
                cout<<*cur<<endl;
            }
        }
    }


    return 0;
}