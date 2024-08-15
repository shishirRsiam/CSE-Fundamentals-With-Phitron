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
        int n; cin>>n;
        str a, b; cin>>a>>b;
        int i = 0, flag = 1;
        while(i<n)
        {
            if((a[i]=='G' or a[i]=='B') and b[i]=='R')
            {
                flag = 0;
                break;
            }
            else if((b[i]=='G' or b[i]=='B') and a[i]=='R')
            {
                flag = 0;
                break;
            }
            i++;
        }
        cout<<(flag?"YES\n":"NO\n");
    }

    return 0;
}