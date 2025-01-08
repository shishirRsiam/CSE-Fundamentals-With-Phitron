#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int flag = 0;
    for (int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int summ=a[i]+a[j]+a[k];
                if(summ==sum)
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    (flag==1)? cout<<"YES": cout<<"NO";
    if(t != 0)
    {
        cout<<"\n";
    }
    }
    return 0;
}