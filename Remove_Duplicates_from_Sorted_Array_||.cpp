
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // If the array has 2 or fewer elements, no duplicates can exceed twice
        if (nums.size() <= 2) {
            return nums.size();
        }

        // writeIndex points to the next position to write a valid element
        // We start at 2 because the first two elements are always valid
        int writeIndex = 2;

        // Start checking from the third element (index 2)
        for (int i = 2; i < nums.size(); ++i) {
            // Check if the current element is different from the element 
            // at the position two steps back in the valid portion.
            // If nums[i] != nums[writeIndex - 2], it means we have not yet 
            // placed two instances of this new value at the writeIndex position.
            if (nums[i] != nums[writeIndex - 2]) {
                nums[writeIndex] = nums[i];
                writeIndex++;
            }
            // If nums[i] == nums[writeIndex - 2], it means we already have 
            // two instances of this value in the valid part, so we skip it.
        }

        return writeIndex;
    }
};
