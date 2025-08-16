#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int total;

        unordered_map<int, int> um;
    
       for(int i=0;i<nums.size();i++){
        total=target-nums[i];

        //if complemet is present
         if(um.count(total)){
            return {um[total],i};
         }

         um[nums[i]]=i;
       }
       return {};

    }
};