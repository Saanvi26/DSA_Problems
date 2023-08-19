class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for (int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else {
                odd.push_back(nums[i]);
            }
        }
        vector<int>ans;
        int e=0;
        int o=0;
        int i=0;
        while(i<nums.size()/2){
            ans.push_back(even[e++]);
             ans.push_back(odd[o++]);
            i++;
        }
        return ans;
    }
};