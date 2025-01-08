#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int mn = LLONG_MAX;
        // long long int mn = numeric_limits<long long>::max();

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long int vall = a[i] + a[j] + j - i;
                mn = min(mn, vall);
            }
        }
        cout << mn<<"\n";
    }
    return 0;
}