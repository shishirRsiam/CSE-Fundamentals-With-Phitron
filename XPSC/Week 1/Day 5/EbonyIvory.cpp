#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c; cin>>a>>b>>c;
    bool flag = 0;
    for(int i=0;i*a<=c;i++)
        if((c- i*a)%b==0) flag = 1;
    cout<<(flag?"Yes":"No")<<"\n";
    return 0;
}