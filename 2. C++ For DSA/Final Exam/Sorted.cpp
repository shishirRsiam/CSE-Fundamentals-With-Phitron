#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        v.push_back(-1);

        vector<int> unique_v;
        for(int i = 1; i <= n; i++)
        {
            if(v[i] != v[i-1])
            {
                unique_v.push_back(v[i-1]);
            }
        }
        for(auto &val : unique_v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
