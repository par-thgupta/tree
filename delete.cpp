#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        (*this).val = val;
        this->left = nullptr;
        this->right = nullptr;
    }
};
int main()
{
    TreeNode *root = new TreeNode(0);
    TreeNode *l1 = new TreeNode(1);
    TreeNode *r1 = new TreeNode(2);
    root->left = l1;
    root->right = r1;

    cout << root->val << endl;
    cout << root->left->val << endl;
    cout << root->right->val << endl;
}