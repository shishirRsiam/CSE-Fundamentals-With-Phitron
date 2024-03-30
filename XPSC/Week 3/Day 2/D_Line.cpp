#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

void fun()
{
    int n; cin>>n;
    vec cng;
    ll sum = 0;
    loop(0,i,n)
    {
        char ch; cin>>ch;
        ch=='L' ? sum += i : sum += n-i-1;

        if(ch=='L')
        {
            if(i < n-i-1) 
                cng.pb(n-i-1-i);
        }
        else 
        {
            if(i > n-i-1) 
                cng.pb(i-(n-i-1));
        }
    }
    sort(bee(cng));
    reverse(bee(cng));
    for(int v:cng)
    {
        sum += v;
        cout<<sum<<" ";
    }
    n -= cng.size();
    while(n--) cout<<sum<<" ";
    cout<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    fun();

    return 0;
}




/*

ekhane amra prothome input nichi plus allsum ber korsi.
then jodi kono L or R change hoye thake tahole setar diff ber korsi. 
then sort kore sum er sathe first value ta add kore print kore dichi.

*/