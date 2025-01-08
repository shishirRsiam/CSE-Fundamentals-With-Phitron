#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> newStack;
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        int v; cin >> v;
        newStack.push(v);
    }
    stack<int> ls;
    ls=newStack;
    cout << "Original Stack:" << endl;
    while(!ls.empty()) {
        cout << ls.top() << endl;
        ls.pop();
    }

    // Creating a new stack
    stack<int> newStack;

    // Swapping the contents of ls and newStack
    ls.swap(ls);

    cout << "Swapped Stack:" << endl;
    while(!ls.empty()) 
    {
        cout << ls.top() << endl;
        ls.pop();
    }

    ls.push(100);

    if(!ls.empty()) {
        cout << "After push(100): " << ls.top();
    }

    return 0;
}
