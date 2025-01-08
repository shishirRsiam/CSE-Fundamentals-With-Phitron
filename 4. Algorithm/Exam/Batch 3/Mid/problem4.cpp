#include <iostream>
#include <vector>

using namespace std;

// Assuming ListNode is defined as follows
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // Create a dummy node to simplify the code
    ListNode *newHead = new ListNode(0);
    ListNode *cur = newHead;

    // Populate the linked list
    for (int value : v)
    {
        cur->next = new ListNode(value);
        cur = cur->next;
    }

    // Skip the dummy node when printing
    newHead = newHead->next;

    // Print the linked list
    while (newHead)
    {
        cout << newHead->val << " ";
        newHead = newHead->next;
    }

    // Clean up memory (free the allocated nodes)
    cur = newHead;
    while (cur)
    {
        ListNode *next = cur->next;
        delete cur;
        cur = next;
    }

    return 0;
}
