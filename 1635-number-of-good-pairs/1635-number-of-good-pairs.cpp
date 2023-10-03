class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        long long sum=0;
        for (auto i:m){
            sum=sum+((i.second)*(i.second-1))/2;
        }
        return sum;
    }
};