#include <iostream>
#include "tree.h"
using namespace std;

int maxDepth(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

int main()
{
    Node *root = createSampleTree();
    cout << maxDepth(root);
    return 0;
}