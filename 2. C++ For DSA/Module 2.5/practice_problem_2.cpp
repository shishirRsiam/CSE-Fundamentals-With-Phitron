#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int;
    cin >> *a;
    cout << "a = " << *a << endl;
    int *ar = new int[*a];
    cout<<"ar = ";
    for (int i = 0; i < *a; i++)
    {
        cin >> ar[i];
        cout << ar[i] << " ";
    }
    cout << "\n";
    int *b = new int;
    cin >> *b;
    cout<<"b = " << *b << endl;
    int *br = new int[*b];
    cout<<"br = ";
    for (int i = 0; i < *a; i++)
    {
        br[i] = ar[i];
        cout << br[i] << " ";
    }
    for (int i = *a; i < *b; i++)
    {
        cin >> br[i];
    }
    cout << "\nNet br = ";
    for (int i = 0; i < *b; i++)
    {
        cout << br[i] << " ";
    }
    return 0;
}
/*
output: 
a = 5
ar = 1 2 3 4 5 
b = 10
br = 1 2 3 4 5 
Net br = 1 2 3 4 5 6 7 8 9 10 
*/