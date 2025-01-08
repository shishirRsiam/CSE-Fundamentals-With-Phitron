#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    while (word.find("EGYPT") != -1)
    {
        word.replace(word.find("EGYPT"), 5, " ");
    }
    cout << word;
    return 0;
}