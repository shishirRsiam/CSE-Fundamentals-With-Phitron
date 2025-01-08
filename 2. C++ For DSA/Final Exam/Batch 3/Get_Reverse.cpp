#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int cls,m_marks,e_marks;
    char sec;
};

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].sec>>a[i].m_marks>>a[i].e_marks;
    }
    int i=0,j=n-1;
    while(i<j)
    {
        swap(a[i],a[j]), i++,j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "<<a[i].m_marks<<" "<<a[i].e_marks<<endl;
    }
    return 0;
}