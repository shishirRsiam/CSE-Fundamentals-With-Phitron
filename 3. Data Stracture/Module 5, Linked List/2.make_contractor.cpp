#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int vall;
    Node* next;
    Node(int vall)
    {
        this->vall=vall;
        this->next=NULL;
    }
};
int main()
{
    Node a(10),b(20);
    a.next=&b;
    cout<<a.vall<<endl;
    cout<<a.next->vall<<endl;
    return 0;
}