#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        set<int>st;
        int n; cin>>n;
        while(n--)
        {
            int i; cin>>i;
            st.insert(i);
        }
        
        vector<int>a(st.begin(),st.end());

        sort(a.rbegin(),a.rend());
        for(int v:a) cout<<v<<" ";
        cout<<endl;
    }
    return 0;
}