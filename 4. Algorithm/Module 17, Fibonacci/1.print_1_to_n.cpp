#include<bits/stdc++.h>
using namespace std;

void fun_(int i, int end)
{
    if(i==end+1) return;
    cout<<i<<", ";
    fun_(i+1,end);
}

int main()
{
    int start = 1, end = 10; 
    fun_(start, end);
    return 0;
}