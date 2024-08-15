#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

vector<long long> printFirstNegativeInteger(long long a[], long long n, long long k) 
{
    vector<long long>ans;
    queue<long long>q;
    long long i = 0, j = 0;
    while(j<n)
    {
        if(j-i+1==k)
        {
            if(a[j]<0) q.push(a[j]);
            if(q.empty()) ans.push_back(0);
            else ans.push_back(q.front());
            if(q.front()==a[i]) q.pop();
            i++, j++;
        }
        else 
        {
            if(a[j]<0) q.push(a[j]);
            j++;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n; cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    long long int k; cin >> k;

    vector<long long> ans = printFirstNegativeInteger(arr, n, k);
    for (auto it : ans) cout << it << " ";

    return 0;
}

// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1