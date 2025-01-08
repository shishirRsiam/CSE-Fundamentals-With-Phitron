#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        bool flag = false;
        if (a >= 0 && b >= 0)
        {
            if (a > b)
            {
                flag = true;
            }
        }
        flag == true ? cout << "A is Greater\n" : cout << "B is Greater\n";
    }
    return 0;
}