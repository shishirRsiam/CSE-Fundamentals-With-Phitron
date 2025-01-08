#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        long long int mul = pow(n, m);
        (n < 0 || m < 0) ? cout << "n and p should be non-negative\n" : cout << mul << endl;
    }
    return 0;
}