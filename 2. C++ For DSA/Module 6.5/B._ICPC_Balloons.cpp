#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string ch;
        cin >> ch;
        int cnt[26] = {0};
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val = ch[i] - 'A';
            (cnt[val] == 0) ? sum = sum + 2 : sum = sum + 1;
            cnt[val]++;
        }
        cout << sum << endl;
    }
    return 0;
}