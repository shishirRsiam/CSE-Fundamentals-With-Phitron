#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    char sec;
    int cls, marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].marks;
    }
    int i=0,j=n-1;
    while(i<j)
    {
        swap(a[i].marks,a[j].marks),i++,j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].marks << endl;
    }
    return 0;
}