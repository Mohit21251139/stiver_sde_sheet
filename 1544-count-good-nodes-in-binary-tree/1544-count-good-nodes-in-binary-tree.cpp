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
   void sol(TreeNode* root,int& count , int value ){

    if (root== NULL){
        return ;
    }
    if (root -> val >= value){
        value = root -> val;
        count ++;
    }
    
     sol(root -> left,count,value);
   
     sol(root-> right,count,value);
    

   }
    int goodNodes(TreeNode* root) {
        int count = 0;
          sol(root,count,root-> val);
        return count ;
        
    }
};