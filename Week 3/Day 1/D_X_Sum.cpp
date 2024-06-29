#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<vector<int>> 
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

int upleft(int i, int j, int n, int m, vec&mat)
{
    int sum = 0;
    while(i>=0 and j>=0 and i<n and j<m)
    {
        sum += mat[i][j];
        i--, j--;
    }
    return sum;
}
int upright(int i, int j, int n, int m, vec&mat)
{
    int sum = 0;
    while(i>=0 and j>=0 and i<n and j<m)
    {
        sum += mat[i][j];
        i--, j++;
    }
    return sum;
}
int downleft(int i, int j, int n, int m, vec&mat)
{
    int sum = 0;
    while(i>=0 and j>=0 and i<n and j<m)
    {
        sum += mat[i][j];
        i++, j--;
    }
    return sum;
}
int downright(int i, int j, int n, int m, vec&mat)
{
    int sum = 0;
    while(i>=0 and j>=0 and i<n and j<m)
    {
        sum += mat[i][j];
        i++, j++;
    }
    return sum;
}


void hahaha()
{
    int n, m; cin>>n>>m;

    vec mat(n, vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    int ans = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int all_sum = mat[i][j] + 
            upleft(i-1, j-1, n, m, mat) +
            upright(i-1, j+1, n, m, mat) +
            downleft(i+1, j-1,n, m, mat) +
            downright(i+1, j+1, n, m, mat);
            ans = max(ans, all_sum);
        }
    }

    cout<<ans<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) hahaha();
    return 0;
}