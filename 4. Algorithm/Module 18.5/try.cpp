#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 105;
vector<pair<int,int>>mat[N];
ll dis[N];
vector<pair<int,map<int,int>>>lvl;

vector<vector<int>> edges = {
    {0, 1, 100},
    {1, 2, 100},
    {2, 0, 100},
    {1, 3, 600},
    {2, 3, 200}};

class cmp 
{
    public:
    bool operator()(pair<int,int>&a, pair<int,int>&b)
    {
        return a.second > b.second;
    }
};

void dijstra(int n, int s)
{
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;

    pq.push({s,0});
    dis[s] = 0;
    lvl[i]
    for(int i=0;i<n;i++)
    {
        for(auto x:mat[i])
            pq.push({x.first, x.second});
    }

    while(!pq.empty())
    {
        int a = pq.top().first, b = pq.top().second;
        for(auto x:mat[a])
        {
            int c = x.first, d = x.second;
            
        }
    }
}

int main()
{

    for(auto x: edges)
    {
        mat[x[0]].push_back({x[1], x[2]});
    }

    int n = 4, s = 0, des = 2, k = 1;


    dijstra(n, s);


    return 0;
}