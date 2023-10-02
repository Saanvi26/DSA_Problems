class Solution {
    private:
    void solve(vector<int>& candidates,vector<vector<int>> &ans,vector<int>&v,int target,int index){
        if(target==0 ){
            ans.push_back(v);
            return ;
        }
       if(target < 0 || index>=candidates.size())
            return;
        if(candidates[index]<=target){
            v.push_back(candidates[index]);
            solve(candidates,ans,v,target-candidates[index],index);
            v.pop_back();
        }
         solve(candidates,ans,v,target,index+1);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        int index=0;
        solve(candidates,ans,v,target,index);
        return ans;
    }
};