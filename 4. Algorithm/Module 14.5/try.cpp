#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string word;
        for (int i = 0; i < 3; i++)
        {
            int position = n - (3 - i - 1) * 26;
            if (position <= 0)
                word += 'z';
            else if (position <= 25)
                word += 'z' + position - 1;
            else
                word += 'a';
            n -= position;
        }
        cout << word << endl;
    }

    return 0;
}