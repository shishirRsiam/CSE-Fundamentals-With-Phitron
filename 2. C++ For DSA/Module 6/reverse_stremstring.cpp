#include<bits/stdc++.h>
using namespace std;
void change(stringstream &name)
{
    string word;
    if(name>>word)
    {
        change(name);
        cout<<word<<endl;
    }
}
int main()
{
    string line;
    getline(cin,line);
    cout<<line<<endl<<endl;
    stringstream name(line);
    change(name);
    // string word;
    // while(name >> word)
    // {
    //     cout<<word<<endl;
    // }
    return 0;
}