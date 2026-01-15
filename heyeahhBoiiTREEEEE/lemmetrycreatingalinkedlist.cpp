#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void printList(Node *head)
{
    if (head == NULL)
        return;
    cout << head->data << " ";
    printList(head->next);
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    printList(head);
    return 0;
}
