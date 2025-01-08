#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    getline(cin,line);
    stringstream name(line);
    string word;
    long long int cnt=0;
    while (name>>word)
    {
        // cout<<word<<endl;
        cnt++;
    }
    cout<<cnt;
    return 0;
}