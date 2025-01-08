void insert_a_tail(Node* &head,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    Node* tmp = head;
    while(tmp.next != NULL)
    {
        tmp=tmp.next;
    }
    tmp.next=newnode;
}