#include <vector>

class Solution
{
public:
    vector<int> ans;

    void dfs(int s, vector<int> adj[], vector<bool> &visited)
    {
        ans.push_back(s);
        visited[s] = true;

        for (int v : adj[s])
        {
            if (!visited[v])
            {
                dfs(v, adj, visited);
            }
        }
    }

    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        vector<bool> visited(V, false); // To keep track of visited vertices

        // Start DFS from the 0th vertex
        dfs(0, adj, visited);

        return ans;
    }
};
