#include<bits/stdc++.h>
#define str string 
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str name = "Timur";
    sort(name.begin(), name.end());
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        str s; cin>>s;
        sort(s.begin(), s.end());
        cout<<(s==name?"YES\n":"NO\n");
    }

    return 0;
}