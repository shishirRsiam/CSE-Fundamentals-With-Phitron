#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    string name1 = "Sishir";
    string name2 = "Siam";
    cout<<name1<<endl;
    name1+=name2;
    cout<<name1<<endl;
    name1.append(name1);
    cout<<name1<<endl;

    string name1 = "Sishir";
    name1=name1+"Siam"; // amader allows eta try korte hobe..
    name1.push_back('S');
    cout<<name1<<endl;
    name1.pop_back();
    cout<<name1<<endl;
    name1.pop_back();
    name1[4]='u';
    cout<<name1<<endl;

    */
    string name1 = "SishirRSiam";
    name1.erase(6,1);
    cout<<name1<<endl;
    // name1.replace(6,1," R. S");
    // name1.replace(6,0," R. ");
    name1.insert(6," Rahman ");
    cout<<name1<<endl;

    return 0;
}