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
        (*this).left = nullptr;
        (*this).right = nullptr;
    }
};
void levelorder(TreeNode *&root)
{
    queue<TreeNode *> q;
    q.push(root);
    while (q.size())
    {
        cout << q.front()->val << " ";
        if (q.front()->left)
        {
            q.push(q.front()->left);
        }
        if (q.front()->right)
        {
            q.push(q.front()->right);
        }
        q.pop();
    }
}
int main()
{
    TreeNode *root = new TreeNode(0);
    root->left = new TreeNode(1);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    levelorder(root);
    return 0;
}