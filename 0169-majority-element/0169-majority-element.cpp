class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //  moore's voting algo
        int count=0;
        int ele=nums[0];
        for (int i=0;i<nums.size();i++){
            if(count==0){
                ele=nums[i];
            }
            if(ele==nums[i]){
                count++;
            }
            else if (ele!=nums[i]){
                count--;
            }
        }
        int t=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                t++;
            }
        }
        if (t>nums.size()/2){
            return ele;
        }
        return -1;
    }
};