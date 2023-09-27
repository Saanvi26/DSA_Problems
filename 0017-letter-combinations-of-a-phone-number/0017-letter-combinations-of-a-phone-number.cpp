class Solution {
 
    private:
      void letterOutput(string digits,vector<string> &output,int index,string str){
           if(index >=digits.length()){
               if(str!=""){
               output.push_back(str);}
               return;
           }
           for(int i=0;i<getString(digits[index]-'0').length();i++){
               str+=getString(digits[index]-'0')[i];
               letterOutput(digits,output,index+1,str);
               str.pop_back();
              }
       }
       public: 
        string getString(int digit){
        vector<string>m;
        m.push_back("");
        m.push_back("");
        m.push_back("abc");
        m.push_back("def");
        m.push_back("ghi");
        m.push_back("jkl");
        m.push_back("mno");
        m.push_back("pqrs");
        m.push_back("tuv");
        m.push_back("wxyz");
        return m[digit];
        }

    vector<string> letterCombinations(string digits) {
          vector<string>output;
        // if(digits.size()==0){
        //     return output;
        // }
        string str="";
        int index=0;
         letterOutput(digits,output,index,str);
         return output;
    }
};