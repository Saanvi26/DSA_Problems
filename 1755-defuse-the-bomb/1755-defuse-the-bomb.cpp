class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans;
        bool flag=true;
         if (k<0){
                reverse(code.begin(),code.end());
                k=(-1)*k;
                flag=false;
            }
        int temp=k;
        int sum=0;
        int m=0;
        int i=m;
        int t=code.size();
      while(t--){
            k=temp;
            if(k==0){
                ans.push_back(0);
                continue;
            }
            while(k--){
                 i++;
                i=i%code.size();
                  sum+=code[i];
            }
            ans.push_back(sum);
            sum=0;
            m++;
            i=m;
            }
            if(!flag){
                reverse(ans.begin(),ans.end());
            }
            return ans;
    }
};