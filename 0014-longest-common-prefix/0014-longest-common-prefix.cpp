class Solution {
    private :
    string comparing(string s,string st){
        string ans="";
        for (int i=0;i<min(s.length(),st.size());i++){
            if(st[i]==s[i]){
                ans+=st[i];
            }
            else {
                break;
            }
        }
        return ans;
    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
        if(strs.size()==1){
            return strs[0];
        }
            int l=min(strs[0].length(),strs[1].length());
            for (int i=0;i<l;i++){
                if(strs[0][i]==strs[1][i]){
                    str+=strs[0][i];
                }
                else {
                    break;
                }
            }
        if(str==""){
            return str;
        }
        else {
            for (int i=2;i<strs.size();i++){
                str=comparing(strs[i],str);
            }
        }
        return str;
    }
};