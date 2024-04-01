#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
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
        ll allsum = 0, abssum = 0;
        vec a(n);
        loop(0,i,n)
        {
            cin>>a[i];
            allsum += a[i];
            abssum += abs(a[i]);
        }

        ll i = 0, cnt = 0;

        bool flag = false;
        while(i<n)
        {
            if(!flag and a[i]<0)
            {
                flag = !flag;
            }
            else if(flag and a[i]>0)
            {
                cnt++;
                flag = !flag;
            }
            i++;
        }
        if(flag) cnt++;
        cout<<abssum<<" "<<cnt<<"\n";
    }

    return 0;
}