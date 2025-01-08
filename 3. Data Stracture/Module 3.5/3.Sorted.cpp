#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool flag = true;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                flag = false;
            }
        }
        flag == true ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}