#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];

void dfs(int src)
{
    cout << src << endl;
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == false)
            dfs(child);
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b); // For directed graph, only add this line
    }
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < n; ++i)
    {
        if (vis[i] == false)
            dfs(i);
    }
    return 0;
}
