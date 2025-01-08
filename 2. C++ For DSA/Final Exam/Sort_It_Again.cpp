#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int m_marks;
    int e_marks;
};
bool cmp(Student a, Student b)
{
    if (a.e_marks != b.e_marks)
    {
        return a.e_marks > b.e_marks;
    }
    if (a.m_marks != b.m_marks)
    {
        return a.m_marks > b.m_marks;
    }
    return a.id < b.id;
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].m_marks >> a[i].e_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; ++i)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].m_marks << " " << a[i].e_marks << endl;
    }
    return 0;
}