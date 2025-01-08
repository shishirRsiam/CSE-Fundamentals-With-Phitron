#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
        // cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].roll > a[j].roll)
            {
                swap(a[i], a[j]);
            }
        }
    }
    Student mn;
    mn.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks > mn.marks)
        {
            mn = a[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;

    return 0;
}