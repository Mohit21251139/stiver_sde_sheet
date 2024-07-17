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
    unordered_set<int> st;
    vector <TreeNode* > ans;
    void sol (TreeNode* &root){
        
        if (root == NULL)return;
        sol(root -> left);
        sol(root-> right);
        if (st.find(root -> val)!= st.end()){
            if (root -> left!= NULL){
                ans.push_back(root -> left);
            }
            if (root-> right!=NULL){
                ans.push_back(root -> right);
            }
            root = NULL;
            delete(root);
        }

    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        int n = to_delete.size();
        for (int i = 0;i< n;i++){
            st.insert(to_delete[i]);
        }
        sol(root);
        if (root != NULL)ans.push_back(root);
        return ans;
    }
};