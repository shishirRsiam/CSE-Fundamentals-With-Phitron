#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int par[N];
int grp_size[N];
int level[N];

int find_(int a)
{
    if(a[par]==-1) return a;
    return par[a] = find_(par[a]);
}

void union_by_size(int a, int b)
{
    a = find_(a), b = find_(b);
    if(grp_size[a] > grp_size[b])
    {
        par[b]=a;
        grp_size[a] += grp_size[b];
    }
    else 
    {
        par[a]=b;
        grp_size[b] += grp_size[a];
    }
}

void union_by_level(int a, int b)
{
    a = find_(a), b = find_(b);

    if(level[a]>level[b]) par[b]=a;
    else if(level[b]>level[a]) par[a]=b;
    else 
    {
        par[b]=a;
        level[a]++;
    }
}

bool isCycle(int a, int b)
{
    return find_(a) == find_(b);
}

int main()
{
    int n,e; cin>>n>>e;
    for(int i=0;i<n;i++)
    {
        par[i]=-1;
        grp_size[i]=1;
        level[i]=0;
    }

    bool flag = false;
    while(e--)
    {
        int a, b; cin>>a>>b;
        if(isCycle(a,b)) flag = true;
        else union_by_level(a,b);
        // else union_by_size(a,b);
    }

    cout<<(flag? "Cycle Ditect" : "No Cycle")<<endl;
    return 0;
}

/*
input:6 3
0 1
0 2
0 3
3 4
3 5 
4 5
*/