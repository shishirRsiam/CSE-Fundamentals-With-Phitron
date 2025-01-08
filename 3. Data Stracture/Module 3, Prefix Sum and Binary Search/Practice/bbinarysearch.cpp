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
        int s;
        cin>>s;
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            if(a[i]==s)
            {
                flag = true;
            }
        }
        flag == true ? cout<<"found\n" : cout<<"not found\n";
    }
    return 0;
}