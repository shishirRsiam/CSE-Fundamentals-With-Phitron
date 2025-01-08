#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int sum = 0, n; cin>>n;
        vec a(n);
        for(int i=0;i<n;i++) cin>>a[i], sum += a[i];

        sum /= n;

        int carry = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=sum) 
            {
                a[i] = sum;
                carry += a[i] - sum;
            }
            else
            {
                int need = sum - a[i];
                if(carry>=need)
                {
                    a[i] = sum;
                    carry -= need;
                }
            }
        }
        bool flag = 1;
        for(int i=0;i<n;i++)
            if(a[i] != sum) flag = false;

        flag ? cout<<"YES\n" : cout<<"NO\n";
    }

    return 0;
}