#include <bits/stdc++.h>
using namespace std;

const int sz = 1005;
char mat[sz][sz];
bool vst[sz][sz];
pair<int, int> par[sz][sz]; // Change int to pair<int,int> for parent tracking
int n, m;
pair<int, int> A, B;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isValid(int i, int j)
{
    return (i >= 0 and j >= 0 and i < n and j < m);
}

void dfs_(int si, int sj)
{
    vst[si][sj] = 1;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first, cj = sj + d[i].second;
        if (isValid(ci, cj) and !vst[ci][cj] and mat[ci][cj] == '.')
        {
            par[ci][cj] = {si, sj}; // Store parent information
            dfs_(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'A')
                A = {i, j};
            if (mat[i][j] == 'B')
                mat[i][j] = '.', B = {i, j};
        }
    }

    par[A.first][A.second] = {-1, -1}; // Parent of the starting node is set to (-1, -1)
    dfs_(A.first, A.second);

    // Now you can trace back the path from B to A using parent information
    if (vst[B.first][B.second])
    {
        cout << "YES" << endl;
        // Trace back the path and print the positions
        pair<int, int> current = B;
        while (current != make_pair(-1, -1))
        {
            cout << current.first << " " << current.second << endl;
            current = par[current.first][current.second];
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
