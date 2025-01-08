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
    while(m--)
    {
        int x;
        cin>>x;
        int flag = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                flag = 1;
            }
        }
        flag == 1 ? cout<<"found\n" : cout<<"not found\n";
    }
    return 0;
}