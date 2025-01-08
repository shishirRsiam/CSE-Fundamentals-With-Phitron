#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id;
};
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id;
        // cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << endl;
    }
    int i=0,j=n-1;
    while (i<j)
    {
        swap(a[i].sec,a[j].sec),i++,j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << endl;
    }
    return 0;
}