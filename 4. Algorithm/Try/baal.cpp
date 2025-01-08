#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) 
    {
        vector<pair<int,int>>row, col;
        int n = grid.size(), m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            int zero = 0, one = 0;
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0) zero++;
                else one++;
            }
            row.push_back({zero, one});
        }
        for(int i=0;i<m;i++)
        {
            int zero = 0, one = 0;
            for(int j=0;j<n;j++)
            {
                if(grid[j][i]==0) zero++;
                else one++;
            }
            col.push_back({zero, one});
        }

        for(auto x:row)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }

        for(int i=0;i<n;i++)
        {
            int zerosRow = row[i].first,
            onesRow  = row[i].second;
            for(int j=0;j<m;j++)
            {
                int zerosCol = col[i].first,
                onesCol = col[i].second;
                grid[i][j] = (onesRow + onesCol) - (zerosRow - zerosCol);
            }
        }

        return grid;

    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 3;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<i<<" "<<j<<"\n";
        }
        cout<<endl;
    }

    return 0;
}