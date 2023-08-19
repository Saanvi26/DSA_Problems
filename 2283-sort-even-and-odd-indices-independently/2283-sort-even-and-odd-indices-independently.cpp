class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        for (int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else {
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        int i=0;
        int k=0;
        int t=0;
        for (int i=0;i<even.size();i++){
            nums[2*i]=even[i];
        }
        for (int i=0;i<odd.size();i++){
            nums[2*i+1]=odd[i];
        }
        return nums;
 

    }
};