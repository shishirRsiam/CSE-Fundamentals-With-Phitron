#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line;
    getline(cin,line);
    bool found=false;
    int cnt=0;
    for(char c:line)
    {
        if(isalpha(c))
        {
            if(found==false)
            {
                cnt++;
            }
            found=true;
        }
        else 
        {
            found=false;
        }
    }
    cout<<cnt;
    return 0;
}