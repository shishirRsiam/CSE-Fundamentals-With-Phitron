#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define PB(x) push_back(x)
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

bool ispalindrome(vec &a, int n)
{
    int i = 0, j = n-1;
    while(i<=j)
    {
        if(a[i] != a[j]) return false;
        i++, j--;
    }
    return true;
}

bool fun(vec &a, int val, int n)
{
    vec tmp;
    loop(0,i,n)
        if(a[i] != val) tmp.PB(a[i]);
    return ispalindrome(tmp, tmp.size());
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vec a(n);
        loop(0,i,n) cin>>a[i];
        
        if(ispalindrome(a, n))
        {
            cout<<"YES\n";
            continue;
        }
        bool flag = false;
        int i = 0, j = n-1;
        while(i<=j)
        {
            if(a[i] != a[j])
            {
                flag = flag or fun(a, a[i], n) or fun(a, a[j], n);
                break;
            }
            if(flag) break;
            i++, j--;
        }
        cout<<(flag?"YES\n":"NO\n");
    }

    return 0;
}