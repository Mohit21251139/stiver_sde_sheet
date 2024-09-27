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
   int ans;
   void sol(TreeNode* root){
    if (root == NULL){
        return ;
    }
    if (root){
        ans++;
    }
    sol(root-> left);
    sol(root -> right);
   }
    int countNodes(TreeNode* root) {
        sol(root);
return ans;
    }
};