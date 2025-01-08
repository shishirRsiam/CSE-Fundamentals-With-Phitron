#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m;
    cin >> n >> m;
    long long sum = 0;
    for (int i = 2; i <= m; i = i + 2)
    {
        long long int val=0;
        for(int j=1;j<=i;j++)
        {
            val = val*n;
        }
        sum+=val;
    }
    cout << sum;
    return 0;
}