#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        map<int,int>mp;
        int n; cin>>n;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            mp[x]++;
        }
        int val = 0;
        int mx = INT_MIN;
        for(auto it=mp.begin();it != mp.end();it++)
        {
            if(it->second > mx or (it->second == mx and it->first > val))
            {
                val = it->first;
                mx = it->second;
            }
        }
        cout<<val<<" "<<mx<<endl;
    }
    return 0;
}

/*
3
10
2 1 3 5 4 6 5 2 1 3
10
-5 -2 1 5 -5 4 -2 -1 -2 -1
5
-1000000000 -112101 10100101 1000000000 12345
*/