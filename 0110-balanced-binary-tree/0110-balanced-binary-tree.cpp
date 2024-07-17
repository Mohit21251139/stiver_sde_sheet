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
    int sol(TreeNode* root){
        if (root== NULL)return 0;

        int left = sol(root -> left);
        int right = sol(root -> right);
        if (abs(left-right) >1)return -1;
                if (left == -1 || right == -1)return -1;

        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        return sol(root) == -1? false:true;
    }
};