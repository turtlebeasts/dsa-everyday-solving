#include <iostream>
#include "tree.h"

using namespace std;

void invertTree(Node *root)
{
    if (root == NULL)
        return NULL;
    Node *leftInverted = invertTree(root->left);
    Node *rightInverted = invertTree(root->right);

    root->left = rightInverted;
    root->right = leftInverted;
}

int main()
{
    Node *root = createSampleTree();
    return 0;
}