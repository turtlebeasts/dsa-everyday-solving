#include <iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int x)
    {
        val = x;
        next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head->next->next->next = new Node(40);
    // head->next->next->next->next = new Node(50);

    int n = 0;
    int length = 0;
    int nth = 0;
    Node *temp = head;
    // find the length
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }

    temp = head;
    while (length - nth - 1 != n)
    {
        nth++;
        temp = temp->next;
    }

    temp->next = temp->next->next;
    temp = head;

    while (temp != NULL)
    {
        cout << temp->val;
        if (temp->next != NULL)
            cout << "->";
        temp = temp->next;
    }
    return 0;
}