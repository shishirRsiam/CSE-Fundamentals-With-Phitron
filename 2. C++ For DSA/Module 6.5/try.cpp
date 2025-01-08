#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    stringstream b(a);
    bool flag=false;
    string word;
    while(b>>word)
    {
        if(flag==true)
        {
            cout<<" ";
        }
        flag=true;
        int j=word.size()-1;
        for(int i=0;i<j;i++)
        {
            int ad=word[i];
            word[i]=word[j];
            word[j]=ad;
            j--;
        }
        
        cout<< word;
    }
    return 0;
}