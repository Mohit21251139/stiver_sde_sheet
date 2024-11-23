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
   vector<int> ans;

    void sol(TreeNode* root){
     if(root == NULL){
        return ;
     }
     sol(root-> left);
     ans.push_back(root -> val);
     sol(root -> right);
    }
    int minDiffInBST(TreeNode* root) {
        int mini2 = INT_MAX;
       sol(root);
        int n= ans.size();
        for (int i=1;i<n;i++){
             
             if (ans[i] - ans[i-1]  <= mini2){
                mini2 = ans[i] - ans[i-1];
             }
        }
        return mini2;
    }
};