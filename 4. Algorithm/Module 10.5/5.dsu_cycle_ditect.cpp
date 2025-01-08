#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int par[N];
int sz[N];
int level[N];

void initialize(int n)
{
    for(int i=0;i<n;i++)
    {
        par[i]=-1;
        sz[i]=1;
        level[i]=0;
    }
}

int find_(int val)
{
    if(par[val]==-1) return val;
    return par[val] = find_(par[val]);
}

void union_by_size(int a, int b)
{
    a = find_(a);
    b = find_(b);
    if(a != b)
    {
        if(sz[a] > sz[b])
        {
            par[b] = a;
            sz[a] += sz[b];
        }
        else 
        {
            par[a] = b;
            sz[b] += sz[a];
        }
    }
}

void union_by_level(int a, int b)
{
    a = find_(a);
    b = find_(b);

    if(a != b)
    {
        if(level[a] > level[b]) par[b]=a;
        else if(level[b] > level[a]) par[a]=b;
        else 
        {
            par[b]=a;
            level[b]++;
        }
    }
}

bool cycle_(int a, int b)
{
    return find_(a) == find_(b);
}

int main()
{
    int n, e; cin>>n>>e;

    initialize(n);

    bool flag = false;
    while(e--)
    {
        int a,b; cin>>a>>b;
        if(cycle_(a,b))
        {
            flag = true;
            cout<<"Cycle detected "<<a<<" and "<<b<<endl;
        }
        else union_by_size(a, b);
    }

    if(!flag) cout<<"NO Cycle"<<endl;

    return 0;
}