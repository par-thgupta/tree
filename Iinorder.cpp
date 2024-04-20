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
void inorder(TreeNode *&root)
{
    stack<TreeNode *> s;
    TreeNode *temp = root;
    while (temp != NULL || s.size() > 0)
    {
        while (temp)
        {
            s.push(temp);
            temp = temp->left;
        }
        cout << s.top()->val << " ";
        temp = s.top()->right;
        s.pop();
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
    inorder(root);
    return 0;
}