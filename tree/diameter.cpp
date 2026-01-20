#include <iostream>
#include <algorithm>
#include "tree.h"
using namespace std;

int dt = 0;

int diameter(Node *root)
{
    if (root == NULL)
        return 0;
    int l = diameter(root->left);
    int r = diameter(root->right);

    dt = max(dt, l + r);
    return 1 + max(l, r);
}

int main()
{
    Node *root = createSampleTree();
    diameter(root);
    cout << dt;
    return 0;
}