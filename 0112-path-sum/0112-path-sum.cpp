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
   bool sol(TreeNode* root,int& sum,int target){
      if (root == NULL){
        return false;
      }
      target += root-> val;
      if (root -> left == NULL && root -> right == NULL){
        if (target == sum){
            return true;
        }
        else {
            return false;
        }
      }
      bool leftans = sol(root -> left,sum,target);
      bool rightans = sol(root -> right,sum,target);
      return leftans || rightans;
   }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool ans ;
        ans = sol(root,targetSum,0);
        return ans;
    }
};