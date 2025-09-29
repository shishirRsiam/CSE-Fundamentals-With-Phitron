#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;  cin>> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string ans_word;
        int ans_count = 0;
        unordered_map<string, int> count;
        while(ss>>s)
        {
            count[s]++;
            if(ans_count < count[s])
            {
                ans_word = s;
                ans_count = count[s];
            }
        }
        cout<<ans_word<<" "<<ans_count<<endl;
    }
    
    return 0;
}
