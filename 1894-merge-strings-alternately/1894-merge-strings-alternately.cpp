class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int e1=(word1).length();
        int e2=(word2).length();
        int s1=0;
        int s2=0;
         char demo[e1+e2];
         string str="";
         int k=0;
        while(s1<e1 && s2< e2){
            demo[k++]=word1[s1++];
            demo[k++]=word2[s2++];
        }
        while(s1<e1){
            demo[k++]=word1[s1++];
        }
        while(s2<e2){
        demo[k++]=word2[s2++];
        }
        for (int i=0;i<k;i++){
           str.push_back(demo[i]);
        }
        return str;
    }
};