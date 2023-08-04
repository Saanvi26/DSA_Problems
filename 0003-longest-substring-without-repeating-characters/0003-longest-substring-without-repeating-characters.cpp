class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector<int> v(127,0);
        int i=0;
        int j=0;
        int len=0;
        while(i<s.length() && j<s.length()){       
         if(v[s[j]]>0){
            v.clear();
            // fill(v.begin(), v.end(), 0);
           vector<int> temp(127,0);
           v=temp;
             len=max(len,j-i);
             cout<<(j-i)<<" ";
               i++;
                j=i;
         }
         else{
             v[s[j]]++;
            //    len=max(len,j-i);
             j++;
         }
        }
        len=max(len,j-i);
        return len;

    }
};