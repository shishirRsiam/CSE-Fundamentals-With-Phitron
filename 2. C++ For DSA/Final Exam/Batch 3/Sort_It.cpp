#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    char sec;
    int cls, m_marks, e_marks, id, t_marks;
};
bool cmp(Student a, Student b)
{
    if (a.t_marks == b.t_marks)
    {
        return a.id < b.id;
    }
    return a.t_marks > b.t_marks;
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >> a[i].id >> a[i].m_marks >> a[i].e_marks;
        a[i].t_marks = a[i].m_marks + a[i].e_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].sec << " " << a[i].id << " " << a[i].m_marks << " " << a[i].e_marks << endl;
    }
    return 0;
}