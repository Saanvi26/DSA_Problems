class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        for (int i=0;i<nums.size();i++){
           if(nums[i]>=0){
               pos.push_back(nums[i]);
           }
           else{
               neg.push_back(nums[i]);
           }
        }
        vector<int>ans;
        int k=0;
        int i=0;
        int t=0;
       while(i<nums.size()/2){
           ans.push_back(pos[k++]);
           ans.push_back(neg[t++]);
           i++;
       }
       return ans;
    }
};