#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
  
    void moveZeroes(vector<int>& nums) {
        int j=0;
         for(int i=0;i<nums.size();i++){
            //Move non-zeros elements forward
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
         }
    }
};