#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    string proffesion;
    string relationship;
    person(string name,int age, string proffesion,string relationship)
    {
        this->name = name;
        this->age = age;
        this->proffesion = proffesion;
        this->relationship = relationship;
    }
    void print()
    {
    cout<<"Name: "<<name<<"\nAge: "<<age<<"\nProffesion: "<<proffesion<<"\nRelationship: "<<relationship<<"\n";
    }
};
int main()
{
    person Siam("Sishir Siam",19,"Learner","Merried");
    // cout<<Siam.name<<"\n"<<Siam.age<<"\n"<<Siam.proffesion<<"\n"<<Siam.relationship<<"\n";
    Siam.print();
    return 0;
}