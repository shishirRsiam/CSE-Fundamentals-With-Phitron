#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char sec;
    int id, m_marks, e_marks;
};
bool cmp(Student a, Student b)
{
    if (a.e_marks == b.e_marks)
    {
        if (a.m_marks == b.m_marks)
        {
            a.id < b.id;
        }
        else
        {
            a.m_marks > b.m_marks;
        }
    }
    else
    {
        return a.e_marks > b.e_marks;
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].m_marks >> a[i].e_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].m_marks << " " << a[i].e_marks << endl;
    }
    return 0;
}