class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        vector<int>ans1;
        vector<int>ans2;
        unordered_set<int>s1;
        unordered_set<int>s2;
        for (auto i : nums1){
            s1.insert(i);
        }
           for (auto i : nums2){
            s2.insert(i);
        }
        
        for (auto i : s1){
            if(s2.count(i)==0){
                ans1.push_back(i);
            }
        }
         for (auto i : s2){
            if(s1.count(i)==0){
                ans2.push_back(i);
            }
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans ;

    }
};