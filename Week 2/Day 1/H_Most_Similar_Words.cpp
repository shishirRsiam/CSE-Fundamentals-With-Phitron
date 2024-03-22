#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<str> 
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
        int n, k; cin>>n>>k;
        vec s(n);
        loop(0,i,n) cin>>s[i];
        int ans = INT_MAX;
        loop(0,x,n)
        {
            loop(x+1, y, n)
            {
                int sum = 0;
                loop(0,i,k)
                    sum += abs(s[x][i]-s[y][i]);
                ans = min(ans, sum);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}