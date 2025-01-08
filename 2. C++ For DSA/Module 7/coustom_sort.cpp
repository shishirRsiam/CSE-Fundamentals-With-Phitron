#include <bits/stdc++.h>
using namespace std;
class Freq
{
public:
    char vallue;
    int count;
};
void fun(string word)
{
    cout << word << endl;
    sort(word.begin(), word.end());
    cout << word << endl;
}
bool cmp(Freq a, Freq b)
{
    if(a.count == b.count)
    {
        return a.vallue < b.vallue;
    }
    return a.count > b.count;
}
void fun2(string word)
{
    Freq f[26];
    for (int i = 0; i < 26; i++)
    {
        f[i].vallue = char(i + 'a');
        f[i].count = 0;
    }
    for (char c : word)
    {
        int ascii = c - 'a';
        f[ascii].count++;
    }
    sort(f, f + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if (f[i].count > 0)
        {
            cout << f[i].vallue << " - " << f[i].count << endl;
            // while(f[i].count--)
            // {
            //     cout<<f[i].vallue;
            // }
            // cout<<endl;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (f[i].count > 0)
        {
            while (f[i].count--)
            {
                cout << f[i].vallue;
            }
            cout << endl;
        }
    }

}
int main()
{
    string word;
    cin >> word;
    // fun(word);
    fun2(word);

    return 0;
}