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
    vector<int> postorderTraversal(TreeNode* root) {
          vector<int> ans;
        
    stack<TreeNode*> st;
       // vector<int> ans;
    TreeNode * current = root;
	while (current != NULL || !st.empty()) {
		while (current!=NULL) {
			st.push(current);
			st.push(current);
			current = current->left;
		}
	    
       
		current = st.top();
		st.pop();
		if (!st.empty() && st.top() == current)
			current = current->right;
		else {
			ans.push_back(current-> val);
            
			current = NULL;
		}
	}
         return ans;
    
    }
};