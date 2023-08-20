class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        map<int,int>m;
        int count=1;
        for (int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>v;
        for (auto i : m ){
            v.push_back(i.first);
        }
        vector<int>temp;
        for (int i=1;i<v.size();i++){
            if(v[i]==v[i-1]+1){
                count++;
            }
            else {
                temp.push_back(count);
                count=1;
            }
        }
         temp.push_back(count);
         sort(temp.begin(),temp.end());
         return temp[temp.size()-1];
    }
};