#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin>>s;
    while(s.size() != 4) s.insert(s.begin(), '0');
    cout<<s<<"\n";

    return 0;
}


// https://atcoder.jp/contests/abc222/tasks/abc222_a