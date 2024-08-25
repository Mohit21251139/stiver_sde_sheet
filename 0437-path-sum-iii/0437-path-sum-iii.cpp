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
  unordered_map<long,int> mpp;
  int count =0;
    void sol(TreeNode* root ,int& target,long long sum,int& cnt){
        if (root == NULL){
            return ;
        }
        sum += root -> val;
      if (mpp.find(sum -target) != mpp.end()){
        cnt+= mpp[sum-target];
      }
      mpp[sum]++;
        sol(root -> left, target,sum,cnt);
        sol(root -> right,target,sum,cnt);
      mpp[sum]--;  
    }
    int pathSum(TreeNode* root, int targetSum) {
        mpp[0] =1;
        int cnt = 0;
        sol(root,targetSum,0,cnt);
        return cnt;
    }
};