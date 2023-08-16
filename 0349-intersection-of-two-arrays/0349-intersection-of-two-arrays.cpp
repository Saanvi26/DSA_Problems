#include <bits/stdc++.h>
#include<map>
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
       unordered_map <int,int>m1;
       unordered_map <int,int>m2;
       for (int i=0;i<nums1.size();i++){
           m1[nums1[i]]++;
       }
          for (int i=0;i<nums2.size();i++){
           m2[nums2[i]]++;
       }
      if(m1.size()<=m2.size()){
       for (auto i :m1 ){
           if(m2.find(i.first)!=m2.end()){
               ans.push_back(i.first);
           }
       }
      }
      else {
          for (auto i :m2 ){
           if(m1.find(i.first)!=m1.end()){
               ans.push_back(i.first);
           }
       } 
      }
        

        return ans;
    }
};