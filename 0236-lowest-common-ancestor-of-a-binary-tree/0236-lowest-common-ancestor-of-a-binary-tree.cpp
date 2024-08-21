/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   TreeNode*  sol (TreeNode* root,TreeNode* p,TreeNode*q){
    if (root == NULL){
        return NULL;
    }
    if (root == q || root == p){
        return root;
    }
    TreeNode* left = sol (root -> left,p,q);
    TreeNode* right = sol(root-> right,p,q);
    //SAME TREE 
    if (left != NULL && right != NULL){
        return root;
    }
    if (left!= NULL){
        return left;

    }
    return right;

   }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return sol(root,p,q);
    }
};