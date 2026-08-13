class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroFoundAt = 0;
        
        // Iterate through the array
        for (int current = 0; current < nums.size(); current++) {
            // If current element is not zero, move it to the 'lastNonZeroFoundAt' position
            if (nums[current] != 0) {
                swap(nums[lastNonZeroFoundAt], nums[current]);
                lastNonZeroFoundAt++;
            }
        }
    }
};
