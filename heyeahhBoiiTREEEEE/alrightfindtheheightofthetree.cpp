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

int heightOfTree(Node *root)
{
    if (root == NULL)
        return 0;
    int left = heightOfTree(root->left);
    int right = heightOfTree(root->right);

    return 1 + max(left, right);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->left->left = new Node(2);
    root->left->left->left = new Node(1);
    root->left->left->right = new Node(3);
    root->left->right = new Node(7);
    root->left->right->right = new Node(8);
    root->right = new Node(15);
    root->right->left = new Node(12);
    root->right->right = new Node(20);
    root->right->right->left = new Node(17);
    root->right->right->left->left = new Node(25);

    cout << heightOfTree(root);
    return 0;
}