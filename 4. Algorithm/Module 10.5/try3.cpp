#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k; cin>>n>>m>>k;
    int a[n],b[m];
    map<int,int>aa,bb;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        if(a[i]<=k)
        {
            aa[a[i]]++;
        }
    }
    for(int i=0;i<m;i++) 
    {
        cin>>b[i];
        if(b[i]<=k) bb[b[i]]++;
    }
    set<int>st;
    for(auto v:aa)
    {
        if(v.second==1) 
        {
            cout<<v.first<<" ";
            st.insert(v.first);
        }
    }
    cout<<endl;

    for(auto v:bb) 
    {
        if(v.second==1) 
        {
            // cout<<v.first<<" ";
            st.insert(v.first);
        }
    }
    cout<<endl;
    vector<int>last;
    for(auto v:st) last.push_back(v);

    k/=2;
    bool flag = true;

    for(int i=1;i<=k;i++)
    {
        if(last[i-1] != i) flag = false;
    }

    flag ? cout<<"YES\n":cout<<"NO\n";

    return 0;
}