class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>m;
        for (auto i : nums ){
            if (i%2==0){
                m[i]++;
            }
        }
    pair <int,int>p(-1,0);
        for (auto i : m){
            if (i.second>p.second){
                p.first=i.first;
                p.second=i.second;
            }
            else if ( i.second==p.second){
                if(p.first < i.first){
                    continue;
                }
                else {
                    p.first=i.first;
                }
            }
        }
        
        return p.first;
    }
};