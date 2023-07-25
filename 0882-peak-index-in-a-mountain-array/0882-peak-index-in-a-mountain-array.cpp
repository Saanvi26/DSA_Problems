class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int index;
        int max=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
                index=i;
            }
        }
        return index;
    }
};