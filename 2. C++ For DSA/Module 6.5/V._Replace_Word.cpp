#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin>>name;
    for(int i=0;i<name.length();i++)
    {
        if(name[i]=='E' && name[i+4]=='T')
        {
            name.erase(1,5);
            cout<<" ";
            if(name[i+1]=='E' && name[i+5]=='T')
            {
            name.erase(1,5);
            cout<<" ";
        }
        }
        if(name[i]=='E' && name[i+4]=='T')
        {
            name.erase(1,5);
            cout<<" ";
        }

        cout<<name[i];
    }

    return 0;
}