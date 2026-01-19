#include <iostream>
#include "tree.h"
using namespace std;

int countNodes(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int main()
{
    Node *root = createSampleTree();
    cout << countNodes(root);
    return 0;
}