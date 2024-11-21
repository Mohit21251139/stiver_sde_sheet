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
   int maxilen = 0;
    void sol(TreeNode* root , int dir ,int curr){
     if (root == NULL)return;
     maxilen = max(maxilen,curr);
     sol (root -> left,0,dir?curr+1:1);
     sol(root -> right,1,dir?1:curr+1);
    }
    int longestZigZag(TreeNode* root) {
        sol(root , 0, 0);
        sol (root ,1,0);
        return maxilen;
    }
};