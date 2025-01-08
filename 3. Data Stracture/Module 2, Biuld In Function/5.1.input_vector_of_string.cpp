#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    vector<string>v(n);
    for(int i=0;i<n;i++)
    {
        getline(cin,v[i]);
        cout<<v[i]<<endl;
    }
    return 0;
}
/*
5
Sishir Rahman
Siam Ahmed
Saad Ahmed
Tushar Ahmed
Jubayel Santo
*/