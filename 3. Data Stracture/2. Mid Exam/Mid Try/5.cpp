#include<bits/stdc++.h>
using namespace std;

int size_ = 0;

void print_(list<int>& myList) {
    cout << "L -> ";
    for (auto i = myList.begin(); i != myList.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    cout << "R -> ";
    for (auto i = myList.rbegin(); i != myList.rend(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

int main() {
    list<int> myList;
    int t; 
    cin >> t;

    while (t--) {
        int op, val; 
        cin >> op >> val;

        if (op == 0) {
            size_++;
            myList.push_front(val);
        } else if (op == 1) {
            size_++;
            myList.push_back(val);
        } else if (op == 2) {
            if (val >= size_) {
                // Handle the case where val is greater than or equal to size_
                cout << "Invalid operation: val is greater than or equal to size_" << endl;
            } else {
                myList.erase(next(myList.begin(), val));
            }
        }
        print_(myList);
    }
    return 0;
}
