#include <iostream>
#include <vector>
using namespace std;

vector<vector<string>> result;


bool isPalindrome(const string &s, int start, int end)
{
    while (start < end)
    {
        if (s[start] != s[end]) return false;
        start++, end--;
    }
    return true;
}

void partitionPalindromeHelper(const string &s, int start, vector<string> &current)
{
    if (start == s.size())
    {
        result.push_back(current);
        return;
    }

    for (int end = start; end < s.size(); end++)
    {
        if (isPalindrome(s, start, end))
        {
            current.push_back(s.substr(start, end - start + 1));
            partitionPalindromeHelper(s, end + 1, current);
            current.pop_back();
        }
    }
}

vector<vector<string>> partitionPalindrome(const string &s)
{
    vector<string> current;
    partitionPalindromeHelper(s, 0, current);
    return result;
}

int main()
{
    string s = "ab";
    partitionPalindrome(s);

    // Print the result
    for (const auto &partition : result)
    {
        cout << "[";
        for (const auto &substring : partition)
        {
            cout << "\"" << substring << "\", ";
        }
        cout << "]" << endl;
    }
    cout<<'z';
    return 0;
}
