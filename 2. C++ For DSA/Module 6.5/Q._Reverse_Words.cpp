#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    getline(cin,line);
    stringstream word(line);
    string ch;
    int flag=true;
    while(word>>ch)
    {
        if(flag==false)
        {
            cout<<" ";
        }
        flag=false;
        reverse(ch.begin(),ch.end());
        cout<<ch;
    }
    return 0;
}