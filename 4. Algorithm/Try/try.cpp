#include <bits/stdc++.h>
using namespace std;

void crossPattern(int N)
{
    int width = 2 * N;
    for (int i = 1; i <= width - 1; ++i)
    {
        for (int j = 1; j <= width - 1; ++j)
        {
            if (j == i || i + j == width)
                cout << i % 3;
            else
                cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    crossPattern(n);
    return 0;
}