#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t_case;
    cin>>t_case;
    while(t_case--)
    {
        int n,sum;
        cin>>n>>sum;
        int array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        int three_sum;
        bool flag=false;
        for(int a=0;a<n-2;a++)
        {
            for(int b=a+1;b<n-1;b++)
            {
                for(int c=b+1;c<n;c++)
                {
                    three_sum=array[a]+array[b]+array[c];
                    if(three_sum==sum)
                    {
                        flag=true;
                        break;
                    }
                    three_sum=0;
                }
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}