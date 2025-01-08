
class Solution
{
public:
    int fre[301] = {0};
    void add(ListNode *head)
    {
        while (head != NULL)
        {
            fre[head->val]++;
            head = head->next;
        }
    }

    void insert_(ListNode *&head, ListNode *&tail, int v)
    {
        ListNode *newnode = new ListNode(v);
        if (!head)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }

    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *newHead = NULL;
        ListNode *newTail = NULL;
        for (int i = 0; i < sizeof(fre); i++)
        {
            if (fre[i] == 1)
            {
                insert_(newHead, newTail, i);
            }
        }
        return newHead;
    }
};