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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 == 1)
        {
            cout << "-1\n";
        }
        else
        {
            int even = 0;
            int odd = 0;
            int val = n / 2;
            for (int i = 0; i < n; i++)
            {
                (a[i] % 2 == 0) ? even++ : odd++;
            }
            if (even == odd)
            {
                cout << "0\n";
            }
            else
            {
                if (even > odd)
                {
                    int res = abs(even - val);
                    cout << res << endl;
                }
                else
                {
                    int res = abs(val - odd);
                    cout << res << endl;
                }
            }
        }
    }
    return 0;
}