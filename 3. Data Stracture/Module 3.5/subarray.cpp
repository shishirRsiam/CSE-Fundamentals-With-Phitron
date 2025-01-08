#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        // cout<<a[i]<<" ";
    }
    int maxsub = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum = 0;
            for(int k=i;k<=j;k++)
            {
                cout<<a[k]<<" ";
                sum = sum +a[k];
            }
            cout<<endl;
            maxsub=max(maxsub,sum);
        }
    }
    cout<<"MaxSub = "<<maxsub;
    return 0;
}