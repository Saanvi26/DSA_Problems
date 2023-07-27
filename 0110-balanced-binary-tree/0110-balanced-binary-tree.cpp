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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        return 1+max(left,right);
    }
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        bool ans1=isBalanced(root->left);
        int h1=height(root->left);
        int h2=height(root->right);
        if(abs(h1-h2)>1){
          return  false;
        }
        else {
             bool ans2=isBalanced(root->right);
             return (ans1 && ans2);
        }
      
    }
};