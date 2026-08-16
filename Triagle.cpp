//

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        
        // dp array to store the minimum path sum for each position
        // Initialize with the last row of the triangle
        vector<int> dp = triangle[n - 1];
        
        // Start from the second-to-last row and move upwards
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                // For each element, add the minimum of the two adjacent
                // values from the row below (stored in dp)
                dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
            }
        }
        
        // The top element now contains the minimum path sum
        return dp[0];
    }
};
