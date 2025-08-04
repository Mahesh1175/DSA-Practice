class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
         int i = m - 1;       // pointer for nums1
        int j = n - 1;       // pointer for nums2
        int k = m + n - 1;   // pointer for final position in nums1

        // Merge from the end to avoid overwriting values in nums1
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // Copy remaining elements from nums2, if any
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }

    }
};
// If nums1 is exhausted (i < 0) but nums2 still has elements (j >= 0),
//  we must copy the remaining elements of nums2 into nums1. 
//  Hence:

// while (j >= 0) {
//     nums1[k--] = nums2[j--];
// }
// If nums2 is exhausted (j < 0) but nums1 still has elements (i >= 0),
//  we don’t need to copy anything. The remaining elements of nums1 are already in place and sorted. 
//  No action is needed.