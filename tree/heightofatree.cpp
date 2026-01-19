#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int findHeight(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(findHeight(root->left), findHeight(root->right));
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << findHeight(root);
    return 0;
}