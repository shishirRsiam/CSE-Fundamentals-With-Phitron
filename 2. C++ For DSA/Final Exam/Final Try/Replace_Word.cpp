#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n, m;
        cin >> n >> m;
        int len = m.length();
        while (n.find(m) != -1)
        {
            n.replace(n.find(m), len, "#");
        }
        cout << n << endl;
    }
    return 0;
}