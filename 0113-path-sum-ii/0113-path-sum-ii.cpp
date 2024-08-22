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
   vector<vector<int>> sol (TreeNode* root,int& target,int sum,vector<vector<int>>& ans,vector<int> temp){
    if (root == NULL){
        return ans;
    }
    sum = sum + root-> val;
    temp.push_back(root -> val);
    if (root -> left == NULL && root -> right == NULL){
        if (sum ==target){
            ans.push_back(temp);
        }
        else{
          temp.pop_back();
        }
        

    }
    sol(root->left,target,sum,ans,temp);
    sol(root->right,target,sum,ans,temp);
    return ans;

   }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector <vector<int>> ans;
        vector<int> temp;
        ans = sol(root,targetSum,0,ans,temp);
        return ans;
    }
};