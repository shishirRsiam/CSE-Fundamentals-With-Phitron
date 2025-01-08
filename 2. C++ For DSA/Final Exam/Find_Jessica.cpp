#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    getline(cin,line);
    stringstream word(line);
    string w;
    int flag = 0;
    while(word>>w)
    {
        if (w=="Jessica") 
        {
            flag = 1;
        }
    }
    (flag == 1) ? cout<<"YES\n" : cout<<"NO\n";
    return 0;
}