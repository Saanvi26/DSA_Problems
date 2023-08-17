class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        long long int num=0;
        int i=0;
        int carry=1;
        if(digits[digits.size()-1]==9){
            for (int i=digits.size()-1;i>=0;i--){
                 if(carry+digits[i]==10)
                {
                    digits[i]=0;
                    carry=1;
                }
                else if (carry+digits[i]<10){
                    digits[i]=digits[i]+carry;
                    carry=0;
                    break;
                }
            }
            if(carry==1){
                ans.push_back(1);
               for (int i=0;i<digits.size();i++){
                   ans.push_back(digits[i]);
               }
                return ans;
            }
           return digits;
        }
        else {
            digits[digits.size()-1]++;
            return digits;
        }
       
    }
};