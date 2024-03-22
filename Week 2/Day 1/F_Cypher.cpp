#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define PB(x) push_back(x)
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        unordered_map<char, int>mp;
        int n; cin>>n;
        vec a(n);
        loop(0,i,n) cin>>a[i];
        loop(0,i,n)
        {
            int val; cin>>val;
            loop(0,k,val)
            {
                char ch; cin>>ch;
                if(ch=='D') 
                {
                    a[i]++;
                    if(a[i]==10) a[i] = 0;
                }
                else if(ch=='U') 
                {
                    a[i]--;
                    if(a[i]==-1) a[i] = 9;
                }
            }
        }
        for(auto &v:a) cout<<v<<" ";
        cout<<endl;
    }

    return 0;
}