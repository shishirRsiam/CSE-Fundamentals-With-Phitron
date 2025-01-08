#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> myList;
    string val;
    while (true)
    {
        cin >> val;
        if (val != "end")
        {
            myList.push_back(val);
        }
        else
        {
            break;
        }
    }

    int n;
    cin >> n;
    auto it = myList.begin();
    while (n--)
    {
        string q;
        cin >> q;
        if (q == "visit")
        {
            string h;
            cin >> h;
            auto it3 = find(myList.begin(), myList.end(), h);

            if (it3 == myList.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                it = it3;
                cout << *it << endl;
            }
            // cout<<h<<endl;
        }
        else if (q == "prev")
        {

            if (it == myList.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                it--;
                cout << *it << endl;
            }
        }
        else if (q == "next")
        {
            auto it2 = myList.end();
            it2--;
            if (it == it2)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                it++;
                cout << *it << endl;
            }
        }
    }


    return 0;
}