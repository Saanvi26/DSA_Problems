class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>non_zeros;
        int count_zero=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                non_zeros.push_back(nums[i]);
            }
            else {
                count_zero++;
            }
        }
        for (int i=0;i< non_zeros.size();i++)
{
    nums[i]=( non_zeros[i]);
}
for (int i=0;i<count_zero;i++){
        nums[i+non_zeros.size()]=(0);
}
    }
};