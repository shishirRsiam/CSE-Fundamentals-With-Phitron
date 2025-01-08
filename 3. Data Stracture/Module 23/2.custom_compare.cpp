#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll,int marks)
    {
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};

class cmp
{
    public:
    bool operator()(Student a, Student b)
    {
        if(a.marks == b.marks)
            return a.roll > b.roll;
        return a.marks < b.marks;
    }
};

int main()
{
    int n; cin>>n;
    // priority_queue<Student, vector<Student>, cmp> pq;
    priority_queue<Student,vector<Student>,cmp>pq;

    for(int i=0;i<n;i++)
    {
        string name; int roll,marks;
        cin>>name>>roll>>marks;
        Student tmp(name,roll,marks);
        pq.push(tmp);
    }

    while(!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
    return 0;
}

/*
input: 5
Sishir 10 99
Siam 12 95
Rahim 25 81
Karim 22 81
Tushar 13 95
*/