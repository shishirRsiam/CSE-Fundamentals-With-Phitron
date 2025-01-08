
In the depth-first search, we need to check if the current land is out of bounds or has already been visited
in which case we return true. If the current land is adjacent to water, we need to recursively check its four
neighbors (up, down, left, right) to see if they form a closed island. If any of the four neighbors is not in th
bounds or is adjacent to water, then the current land is not a closed island, and we return false. If all four
neighbors form a closed island, then the current land also forms a closed island, and we return true.
Finally, we return the count.




class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) 
    {
        int res = 0;
        for (int i = 0; i < grid.size(); i++){
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 0){
                    res += dfs(grid, i, j) ? 1 : 0;
                }
            }
        }
        return res;
    }
    bool dfs(vector<vector<int>>& g, int i, int j){
        if (i < 0 || j < 0 || i >= g.size() || j >= g[0].size())
            return false;
        if (g[i][j] == 1)
            return true;

        g[i][j] = 1;
        /* IMPORTANT NOTE: 
        WHY I CANNOT USE `return dfs(g, i+1, j) && dfs(g, i, j+1) && dfs(g, i-1, j) && dfs(g, i, j-1);`???
        BECAUSE IF ANY OF THE FIRST DFS() RETURNS FALSE, FOLLOWING ONES WILL NOT EXECUTE!!! THEN WE DON'T
        HAVE THE CHANCE TO MARK THOSE 0s TO 1s!!!
        */
        bool d1 = dfs(g, i+1, j);
        bool d2 = dfs(g, i, j+1);
        bool d3 = dfs(g, i-1, j);
        bool d4 = dfs(g, i, j-1);
        return d1 && d2 && d3 && d4;
    }
};