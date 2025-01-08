#include<bits/stdc++.h>
#define ll long long 
using namespace std;



int main()
{
    string s; getline(cin,s);
    stringstream ss(s);
    string w;

    int cnt = 0;
    while(ss>>w)
    {
        bool flag = true;
        for(char c:w) 
        {
            if(!islower(c))
            {
                flag = !flag;
                break;
            }
        }
        if(flag) cnt++, cout<<cnt<<" "<<w<<endl;
    }
    cout<<cnt;
    return 0;
}