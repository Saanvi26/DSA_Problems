class Solution {
    private :
    int lastIndex(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        int temp=-1;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target){
                temp=m;
                s=m+1;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else if (nums[m]<target){
                s=m+1;
            }
        }
        return temp;
    }
    int firstIndex(vector<int>& nums, int target){
            int s=0;
        int e=nums.size()-1;
        int temp=-1;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target){
                temp=m;
                e=m-1;
            }
            else if(nums[m]>target){
                e=m-1;
            }
            else if (nums[m]<target){
                s=m+1;
            }
        }
        return temp;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int last=lastIndex(nums,target);
        int first=firstIndex(nums,target);
        vector<int>v;
        v.push_back(first);
        v.push_back(last);
        return v;
    }
};