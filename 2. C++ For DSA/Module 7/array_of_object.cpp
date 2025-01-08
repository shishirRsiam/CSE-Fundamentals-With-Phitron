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
    int *n = new int;
    cin >> *n;
    // Student array[n];
    Student *array = new Student[*n];
    for (int i = 0; i < *n; i++)
    {
        getchar();
        getline(cin, array[i].name);
        cin >> array[i].roll >> array[i].marks;
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
    }
    return 0;
}