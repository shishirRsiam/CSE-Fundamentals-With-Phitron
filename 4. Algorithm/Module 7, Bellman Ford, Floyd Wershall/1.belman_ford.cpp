#include<bits/stdc++.h>
using namespace std;

class Edge
{
    public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u, this->v = v, this->c = c;
    }
};

const int N = 1e5+5;
int dis[N];

int main()
{
    vector<Edge> vec;
    int n, e; cin>>n>>e;
    while(e--)
    {
        int u,v,c; cin>>u>>v>>c;
        vec.push_back(Edge(u,v,c));
    }

    for(int i=0;i<N;i++) dis[i]=INT_MAX;
    dis[0]=0;

    for(int i=0;i<n-1;i++)
    {
        for(auto x:vec)
        {
            int u = x.u, v = x.v, c = x.c;
            if(dis[u]<INT_MAX and dis[u]+c < dis[v])
            {
                dis[v]=dis[u]+c;
            }
        }
    }
    for(int i=0;i<n;i++) cout<<i<<" -> "<<dis[i]<<endl;
    return 0;
}

// time complexibity O(V*E);
/*
input: 4 4
0 2 5
0 3 12
2 1 2
1 3 3
output: 
0 -> 0
1 -> 7
2 -> 5
3 -> 10

input: 4 4
1 3 -3
0 3 5
2 1 1
0 2 -2
output: 
0 -> 0
1 -> -1
2 -> -2
3 -> -4
*/