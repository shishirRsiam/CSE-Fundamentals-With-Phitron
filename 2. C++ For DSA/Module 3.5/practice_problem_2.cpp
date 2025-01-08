#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    int jersey_no;
    char country[100];
};
int main()
{
    char a[100] = "Bangladesh";
    Cricketer *Sakib = new Cricketer;
    Sakib->jersey_no=75;
    strcpy(Sakib->country,a);
    cout<<"Sakib: "<<Sakib->jersey_no<<" "<<Sakib->country;
    cout<<"\n\n";
    Cricketer *Miraz = new Cricketer;
    Miraz->jersey_no=Sakib->jersey_no;
    strcpy(Miraz->country,Sakib->country);
    cout<<"Sakib Delete korar age Miraz: "<<Miraz->jersey_no<<" "<<Miraz->country;
    cout<<"\n\n";
    delete Sakib;
    cout<<"Sakib Delete korar por Miraz: "<<Miraz->jersey_no<<" "<<Miraz->country;
    return 0;
}
/*
output:
Sakib: 75 Bangladesh

Sakib Delete korar age Miraz: 75 Bangladesh

Sakib Delete korar por Miraz: 75 Bangladesh
*/