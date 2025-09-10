#include<iostream>
#include<vector>

using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n = nums.size();
        int st = 0, ed = n - 1;

        while (st < ed) {
            int mid = st + (ed - st) / 2;

            // Make mid even for correct pair comparison
            if (mid % 2 == 1) mid--;

            if (nums[mid] == nums[mid + 1]) {
                st = mid + 2; // unique element is on the right
            } else {
                ed = mid; // unique element is on the left (including mid)
            }
        }

        return nums[st]; // st will point to the unique element
  
    }
};