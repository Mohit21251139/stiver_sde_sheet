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
    private:
    void sol(TreeNode* root,int& ans,string num){
        if (root == NULL ){
            return ;
        }
        if (root-> left == NULL && root -> right == NULL){
            num += to_string(root -> val);
            ans += stoi(num);
            return ;
        }
        num+= to_string(root -> val);
        sol(root -> left,ans,num);
        sol(root -> right,ans,num);
    }
public:
    int sumNumbers(TreeNode* root) {
        int ans = 0;
        string num = "";
        sol (root , ans,num);
        return ans;
    }
};