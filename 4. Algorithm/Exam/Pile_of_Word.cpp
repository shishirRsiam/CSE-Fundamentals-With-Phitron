#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n; cin>> n;
    while(n--)
    {
        string s1, s2; cin>>s1>>s2;
        sort(begin(s1), end(s1));
        sort(begin(s2), end(s2));
        cout<<(s1 == s2 ? "YES" : "NO")<<endl;
    }   

    return 0;
}
