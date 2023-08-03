class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=0;
        map<int,int>m;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int k=0;
        for (auto i:m){
            nums[k++]=i.first;
        }
        return m.size();
    }
};