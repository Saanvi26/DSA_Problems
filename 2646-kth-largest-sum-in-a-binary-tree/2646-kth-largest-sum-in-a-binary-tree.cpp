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
    long long kthLargestLevelSum(TreeNode* root, int k) {
       queue<TreeNode* >q;
        q.push(root);
      vector<long long >ans;
        while(!q.empty()){
            int count=q.size();
            long long  sum=0;
             while(count--){
             if(q.front()->left){
                q.push(q.front()->left);
            }
            if (q.front()->right){
                q.push(q.front()->right);
            }
               sum+=q.front()->val;
               q.pop();
            }
        ans.push_back(sum);
        }
        sort(ans.begin(),ans.end());
        if(ans.size()<k){
            return -1;
        }
        return ans[ans.size()-k];
    }
};