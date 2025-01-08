#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if (find(a.begin(),a.end(),a[i]+1) != a.end())
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}