#include<bits/stdc++.h>
using namespace std;
class S
{
    public:
    int id;
    char name[101];
    char sec;
    int marks;
    S(int id,char name[],char sec,int marks)
    {
        this->id=id;
        strcpy(this->name,name);
        this->sec=sec;
        this->marks=marks;
    }
};
int main()
{
    int t_case;
    cin>>t_case;
    while(t_case--)
    {
        int id,marks;
        char name[1001], sec;
        cin>>id>>name>>sec>>marks;
        S a(id, name, sec, marks);
        cin>>id>>name>>sec>>marks;
        S b(id,name,sec,marks);
        cin>>id>>name>>sec>>marks;
        S c(id,name,sec,marks);

        int mx=max({a.marks,b.marks,c.marks});
        if(mx==a.marks)
        cout<<a.id<<" "<<a.name<<" "<<a.sec<<" "<<a.marks<<endl;
        else if(mx==b.marks)
        cout<<b.id<<" "<<b.name<<" "<<b.sec<<" "<<b.marks<<endl;
        else if(mx==c.marks)
        cout<<c.id<<" "<<c.name<<" "<<c.sec<<" "<<c.marks<<endl;
    }
    return 0;
}