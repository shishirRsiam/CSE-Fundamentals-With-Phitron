#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
#define pi pair<ll,ll>
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

class cmp
{
    public:
    bool operator()(const pi&a, const pi&b)
    {
        if(a.second == b.second) return a.first > b.first;
        return a.second > b.second;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<ll, ll> freq;
    ll n; cin>>n;
    loop(0,i,n)
    {
        int x; cin>>x;
        if(x==1)
        {
            int a; cin>>a;
            freq[a]++;
        }
        else 
        {
            if(freq.empty()) cout<<"empty\n";
            else 
            {
                // vector<pi> vv (mp.begin(), mp.end());
                // sort(vv.begin(), vv.end(), cmp());
                ll maxOccur = 0;
                ll maxVal = INT_MIN;
                for (auto it = freq.begin(); it != freq.end(); it++)
                {
                    if ((it->second > maxOccur) ||
                        ((it->second == maxOccur) && (it->first > maxVal)))
                    {
                        maxOccur = it->second;
                        maxVal = it->first;
                    }
                }
                cout << maxVal << '\n';
                freq.erase(maxVal);
                // cout<<endl;
            }
        }
    }

    return 0;
}