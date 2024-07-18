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
    vector <int> leafNode(TreeNode* root,int dis,int & cnt) {
        if (root==NULL)return {0};

        if (!root-> left && !root-> right){
            return {1};
        }
       vector <int> left =  leafNode (root -> left,dis,cnt);
       vector<int > right=  leafNode(root -> right,dis,cnt);
      for (int x : left){
        for (int y : right){
            if (x>0 && y>0){
                if (x+y<= dis)cnt ++;
            }
        }
      }
      vector<int>ans ;
      for (int x: left){
        if (x>0 && x< dis)
             ans.push_back(x+1);
      }
      for (int x:right){
        if (x>0 && x< dis)
              ans.push_back(x+1);
      }
        return ans;
    }
    int countPairs(TreeNode* root, int distance) {
       int cnt = 0;
       leafNode (root ,distance,cnt);
       return cnt;
    }  
};