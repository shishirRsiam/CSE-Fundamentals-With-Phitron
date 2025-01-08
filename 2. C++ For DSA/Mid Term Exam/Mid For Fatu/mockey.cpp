#include<bits/stdc++.h>
using namespace std;
int main()
{
    char name[1000001];
    while(cin.getline(name,1000001))
    {
        int munber = strlen(name);
        sort(name,name+munber);
        for(int i=0;i<munber;i++)
        {
            if(name[i]==' ')
            {
                continue;
            }
            cout<<name[i];
        }
        cout<<endl;
    }
    return 0;
}