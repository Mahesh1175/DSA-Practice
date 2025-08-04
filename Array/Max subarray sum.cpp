// Kadane's algorithm to find the maximum subarray sum
// Example 1:

// Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
// Output: 6
// Explanation: The subarray [4,-1,2,1] has the largest sum 6.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=nums[0];
        int total=currSum;
        for (int i=1;i<nums.size();i++){
           currSum=max(nums[i],currSum+nums[i]);
           total=max(total,currSum);
        }
        return total;
    }
};