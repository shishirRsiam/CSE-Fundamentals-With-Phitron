#include<bits/stdc++.h>
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        unordered_map<int,int>mp;
        loop(0,i,n)
        {
            int a; cin>>a;
            mp[a]++;
        }
        if(mp.size()==n) 
        {
            cout<<n<<"\n";
            continue;
        }
        int sz = mp.size();
        int remove = n-sz;
        if(remove%2==1) sz--;
        cout<<sz<<"\n";
    }

    return 0;
}