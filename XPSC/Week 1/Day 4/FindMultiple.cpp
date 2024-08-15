#include<bits/stdc++.h>
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c; cin>>a>>b>>c;

    loop(a, i, b+1)
    {
        if(i%c==0)
        {
            cout<< i<<"\n";
            return 0;
        }
    }
    cout<<"-1\n";
    return 0;
}