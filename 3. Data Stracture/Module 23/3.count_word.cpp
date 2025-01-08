#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        map<string, int> mp;
        string sentence;
        getline(cin, sentence);

        istringstream iss(sentence);
        string word;
        while (iss >> word)
        {
            mp[word]++;
        }

        int mx = INT_MIN;
        string s;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            
            if (it->second > mx)
            {
                s = it->first;
                mx = it->second;
            }
        }
        cout << s << " " << mx << endl;
    }
    return 0;
}

/*
1
ratul piyush fohad shuvo rafi piyush fohad ratul
*/