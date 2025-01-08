#include<bits/stdc++.h>
using namespace std;

const int sz = 1e5+1024;
vector<int> mat[sz];

int main()
{
    int n, e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int l; cin>>l;
    cout<<mat[l].size();

    return 0;
}

/*
input: 6 5
0 1
0 2
0 3
2 3
4 5
2
*/