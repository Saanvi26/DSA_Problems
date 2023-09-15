class Solution {
    private :
    int powerofthree(int n){
        int i=0;
        int k;
       while(pow(3,i)<=n){
           if(pow(3,i)==n){
               k= i;
               break;
           }
           else if (pow(3,i)>n){
               k= i-1;
               break;
           }
           i++;
       }
              return k ;
    }

public:
    bool checkPowersOfThree(int n) {
       unordered_map<int,int>m;
       while(n!=0){
           int po=powerofthree(n);
           if(m.find(po)!=m.end()){
               return false;
           }
           else {
               m[po]++;
           }
           n=n-pow(3,po);
       }
       return true;

    }
};