class Solution {
public:
    void moveZeroes(vector<int>& nums) {
     
    int j = 0;

    // Traverse the array and move all non-zero elements to the front
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }

    // Fill the remaining elements with zeros
    while (j < nums.size()) {
        nums[j] = 0;
        j++;
    }

    }
};