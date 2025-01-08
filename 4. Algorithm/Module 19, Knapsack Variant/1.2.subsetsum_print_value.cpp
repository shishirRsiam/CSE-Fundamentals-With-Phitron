#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
using namespace std;


vector<vector<ll>>ans;
vec nums = {1, 2, 6, 4};
void subset(int i, int sum, vec &cur)
{
    cout<<i<<" "<<sum<<endl;
    if(!sum)
    {
        ans.push_back(cur);
        return;
    }
    if(!i) return;
    subset(i-1, sum, cur);
    cur.insert(cur.begin(), nums[i-1]);
    if(nums[i-1]<=sum)
        subset(i-1, sum - nums[i-1], cur);
    cur.erase(cur.begin());
}

int main()
{
    vec cur;
    subset(nums.size(), 7, cur);
    if(ans.empty()) cout<<"Opps!\nSubset Sum not found!\n";
    else 
    {
        cout<<"Size -> "<<ans.size()<<endl;
        for(auto x:ans)
        {
            for(auto v:x) cout<<v<<" ";
            cout<<endl;
        }
    }
    return 0;
}