#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j && i+j==n-1)
            {
                cout<<"X";
            }
            else if(i==j)
            {
                cout<<"\\";
            }
            else if((i+j)==n-1)
            {
                cout<<"/";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
input: 5
output:
\   /
 \ / 
  X  
 / \ 
/   \
*/