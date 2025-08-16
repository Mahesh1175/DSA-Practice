class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot = -1;

        // 1. Find the pivot (first element from right which is smaller than next)
        for (int i = n - 1; i > 0; i--) {
            if (nums[i - 1] < nums[i]) {
                pivot = i - 1;
                break;
            }
        }

        // 2. If no pivot, it’s the last permutation -> return first permutation
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // 3. Find the smallest number greater than nums[pivot] on right side
        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // 4. Reverse suffix (elements after pivot)
        reverse(nums.begin() + pivot + 1, nums.end());
    }
};
