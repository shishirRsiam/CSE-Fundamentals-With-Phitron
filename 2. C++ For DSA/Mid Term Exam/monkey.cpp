#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while (getline(cin, s))
    {
        int len = s.length();
        // cout<<len;
        // sort(s.begin(), s.end());
        sort(s, s + strlen(s));
        /*
        for (int i = 0; i < len - 1; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (s[i] > s[j])
                {
                    char tmp = s[i];
                    s[i] = s[j];
                    s[j] = tmp;
                }
            }
        }
        */
        for (int i = 0; i < len; i++)
        {
            if (s[i] != ' ')
            {
            cout << s[i];
            }

        }
        cout << "\n";
    }

    return 0;
}
