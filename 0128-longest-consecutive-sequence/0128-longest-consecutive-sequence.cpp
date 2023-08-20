class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        unordered_set<int>s;
        for (int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int largest=1;
        for (auto i : s){
           if( s.find(i-1)==s.end()){
               int ctn=1;
               int x=i;
                while(s.find(x+1)!=s.end()){
                    ctn++;
                    x++;
                }
                largest=max(largest,ctn);
           }
          
        }
        return largest;
    }
};