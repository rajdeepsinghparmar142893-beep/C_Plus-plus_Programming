//https://leetcode.com/problems/find-peak-element/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // If the current element is smaller than the next one,
            // we are on an upward slope, so the peak is to the right.
            if (nums[mid] < nums[mid + 1]) {
                left = mid + 1;
            } 
            // Otherwise, we are on a downward slope or at a peak,
            // so the peak is to the left (including mid).
            else {
                right = mid;
            }
        }
        
        // left == right, which is the index of a peak element.
        return left;
    }
};
