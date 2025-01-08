#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int vall;
    Node* next;
    Node(int vall) {
        this->vall = vall;
        this->next = NULL;
    }
};

void insert_tail(Node* &head, Node* &tail, int vall) {
    Node* newnode = new Node(vall);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int Search_(Node* head, int x) {
    int ans = -1;
    int index = 0;
    Node* tmp = head;
    while (tmp != NULL) {
        if (tmp->vall == x) {
            ans = index;
            break;
        }
        tmp = tmp->next;
        index++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        Node* head = NULL;
        Node* tail = NULL;
        while (true) {
            int vall;
            cin >> vall;
            if (vall == -1) break;
            insert_tail(head, tail, vall);
        }
        int x;
        cin >> x;
        int result = Search_(head, x);
        cout << result << endl;
    }
    return 0;
}
