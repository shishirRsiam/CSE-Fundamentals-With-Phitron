#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int ID;
    char name[100];
    char section;
    int marks;
    Student(int ID,char name[],char section, int marks)
    {
        this->ID=ID;
        strcpy(this->name,name);
        this->section=section;
        this->marks=marks;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int id, marks;
    char section;
    char name[100];
    cin >> id >> name >> section >> marks;
    Student a(id,name,section,marks);
    cin >> id >> name >> section >> marks;
    Student b(id,name,section,marks);
    cin >> id >> name >> section >> marks;
    Student c(id,name,section,marks);

    int mx=a.marks;
    if (b.marks>mx)
    {
        mx=b.marks;
    }
    if(c.marks>mx)
    {
        mx=c.marks;
    }

    if(mx==a.marks)
    {
    cout<<a.ID<<" "<<a.name<<" "<<a.section<<" "<<a.marks<<"\n";
    }
    else if(mx==b.marks)
    {
    cout<<b.ID<<" "<<b.name<<" "<<b.section<<" "<<b.marks<<"\n";
    }
    else if(mx==c.marks)
    {
    cout<<c.ID<<" "<<c.name<<" "<<c.section<<" "<<c.marks<<"\n";
    }

    // cout<<a.ID<<" "<<a.name<<" "<<a.section<<" "<<a.marks;
    // cout<<"\n";
    // cout<<b.ID<<" "<<b.name<<" "<<b.section<<" "<<b.marks;
    // cout<<"\n";
    // cout<<c.ID<<" "<<c.name<<" "<<c.section<<" "<<c.marks;
    }
    return 0;
}