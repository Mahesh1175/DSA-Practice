// Single Number
// 0^0=0
// 0^1=1   
// 1^1=0
// 1^0=1
// XOR of a number with itself is 0, and XOR with 0 is the number
// if 2 4 2 4 1 then 2^4^2^4^1=1 same like 2-4-2-4-1=1
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
           ans=ans^nums[i];
        }
        return ans;
    }
};