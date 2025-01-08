#include<bits/stdc++.h>
using namespace std;

const int sz = 1024;
vector<int>mat[sz];
bool vst[sz];

void dsf_(int s, int& cnt)
{
    cnt++;
    vst[s]=1;
    for(int c:mat[s])
        if(!vst[c]) dsf_(c,cnt);
}

int main()
{
    int n, e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int cnt = 0;
        if(!vst[i]) 
        {
            dsf_(i,cnt);
            a.push_back(cnt);
        }
    }
    sort(a.begin(),a.end());
    for(int v:a) cout<<v<<" ";
    return 0;
}

/*
input: 10 5
1 2
2 3
1 3
4 0
5 6
*/