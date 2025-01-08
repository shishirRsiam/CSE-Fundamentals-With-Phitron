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
    }
    int cursum = 0;
    int max_sub_sum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cursum = cursum+a[i];
        cout<<cursum<<" "<<max_sub_sum<<endl;
        if(cursum<0)
        {
            cursum = 0;
        }
        max_sub_sum = max(max_sub_sum,cursum);
    }
    cout<<"Max_Sum: "<<max_sub_sum;
    return 0;
}