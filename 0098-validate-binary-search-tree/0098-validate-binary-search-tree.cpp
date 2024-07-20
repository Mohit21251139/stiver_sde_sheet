/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool sol(TreeNode* root ,long long  mini,long long  maxi){
        if (root == NULL)return true;
        if (root ->val<=mini || root -> val >= maxi)return false;
        bool left = sol (root-> left ,mini, root -> val);
        bool right = sol (root -> right,root -> val,maxi);
        return left && right;
    }
    bool isValidBST(TreeNode* root) {
        long long mini = -1e9;
        long long maxi = 1e9;
        return sol(root , LONG_MIN,LONG_MAX);
    }
};