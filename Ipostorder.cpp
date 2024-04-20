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
// using 2 stacks
// void inorder(TreeNode *&root)
// {
//     stack<TreeNode *> s1, s2;
//     s1.push(root);
//     while (s1.size() > 0)
//     {
//         TreeNode *x = s1.top();
//         s2.push(x);
//         s1.pop();
//         if (x->left)
//             s1.push(x->left);
//         if (x->right)
//             s1.push(x->right);
//     }
//     while (s2.size() > 0)
//     {
//         cout << s2.top()->val << " ";
//         s2.pop();
//     }
// }

// using 1 stacks
void inorder(TreeNode *&root)
{
    stack<TreeNode *> s;
    TreeNode *temp = root;
    while (temp || !s.empty())
    {
        if (temp)
        {
            s.push(temp);
            temp = temp->left;
        }
        else
        {
            TreeNode *ctr = s.top()->right;
            if (ctr)
            {
                temp = ctr;
            }
            else
            {
                ctr = s.top();
                cout << ctr->val << " ";
                s.pop();
                while (!s.empty() && ctr == s.top()->right)
                {
                    ctr = s.top();
                    s.pop();
                    cout << ctr->val << " ";
                }
            }
        }
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