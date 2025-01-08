#include <bits/stdc++.h>
using namespace std;
int main()
{
    char S[1000001];
    while(cin.getline(S, 1000001))
    {
        int l=strlen(S);
        sort(S, S + strlen(S));
        for(int i=0;i<l;i++)
        {
            if (S[i] != ' ')
            {
                cout<<S[i];
            }
        }
        cout<<endl;
    }
    return 0;
}