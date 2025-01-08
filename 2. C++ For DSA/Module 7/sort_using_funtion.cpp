#include <bits/stdc++.h>
using namespace std;
class Stu
{
public:
    string name;
    int roll;
    int marks;
};
bool cmp(Stu a, Stu b)
{
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    return a.marks >= b.marks;
}
int main()
{
    int n;
    cin >> n;
    Stu a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

 
    return 0;
}
/*
input: 5
Sishir 30 98
Siam 15 95
Santo 25 98
Tushar 13 96
Saad 19 85
output: 
Saad 19 85
Siam 15 95
Tushar 13 96
Sishir 30 98
Santo 25 98 
*/