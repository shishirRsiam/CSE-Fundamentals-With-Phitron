#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    while(m--)
    {
        int x;
        cin>>x;
        int flag = 0;
        int l = 0, r = n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(x==a[mid])
            {
                flag = 1;
                break;
            } 
            if(x>a[mid])
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        (flag == 1) ? cout<<"found\n" : cout<<"not found\n";
    }
    return 0;
}