#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *Sishir = new Person("Sishir", 19);
    Person *Siam = new Person("Siam", 20);
    // Sishir ke Siam er okhane copy korbo...
    // Siam.name=Sishir.name;
    // Siam.age=Sishir.age;
    *Siam = *Sishir;
    cout<<Siam->name<<"\n"<<Siam->age;
    return 0;
}