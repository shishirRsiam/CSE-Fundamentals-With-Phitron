#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, e;
    cin >> n >> e;

    ll adj[n][n];

    // Initialize adjacency matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = (i == j) ? 0 : INT_MAX; // Setting diagonal to 0, and others to INT_MAX
        }
    }

    // Take input of edges
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a][b] = 1; // For unweighted graphs, set edge weight to 1
        // adj[b][a] = 1; // Assuming undirected graph, so add both directions
    }

    // Floyd-Warshall Algorithm
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] != INT_MAX && adj[k][j] != INT_MAX)
                {
                    adj[i][j] = min(adj[i][j], adj[i][k] + adj[k][j]);
                }
            }
        }
    }

    // Output all pair shortest path distances
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" -> ";
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] == INT_MAX)
            {
                cout << "INF ";
            }
            else
            {
                cout << adj[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
