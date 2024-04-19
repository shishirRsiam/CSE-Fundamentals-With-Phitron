#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define shishirRsiam cin.tie(NULL);
using namespace std;



void testcase()
{
    int n; cin>>n;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    bool flag = true;
    loop(0,i,n-2)
    {
        int x = a[i], y = -1, z = -1;
        int idxy = -1;
        loop(i+1, j, n-1)
        {
            if(a[j]>x)
            {
                idxy = j+1;
                y = a[j];
                break;
            }
            if(x>=a[j])
            {
                x = a[j];
                i = j;
            }
        }
        if(idxy == -1) break;
        else 
        {
            loop(idxy, j, n)
            {
                if(a[j]<y)
                {
                    z = j+1;;
                    break;
                }
            }
        }
        if(y != -1 and z != -1)
        {
            py;
            // cout<<a[i]<<" "<<a[idxy-1]<<" "<<a[z-1]<<"\n";
            cout<<i+1<<" "<<idxy<<" "<<z<<"\n";
            flag = false;
            break;
        }
    }
    if(flag) pn;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 
        testcase();

    return 0;
}