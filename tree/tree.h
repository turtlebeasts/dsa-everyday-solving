#ifndef TREE_H
#define TREE_H

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

/*
        1
    2       3
4               5
            6
*/

// helper function to build a sample tree
inline Node *createSampleTree()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);
    root->right->right->left = new Node(6);
    return root;
}

#endif
