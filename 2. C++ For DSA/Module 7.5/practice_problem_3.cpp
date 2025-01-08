#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    getline(cin,line);
    // cout<<line;
    string name;
    cin>>name;
    // cout<<"\n"<<name;
    stringstream word(line);
    string w;
    int cnt=0;
    while(word>>w)
    {
        if(w==name)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}