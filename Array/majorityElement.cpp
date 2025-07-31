// if freq count of num > n/2 then return num 
// TC: O(n)
// SC: O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> um;
         for(int i=0;i<nums.size();i++){
          um[nums[i]]++;  //increment the count of duplicate values
           
         if(um[nums[i]] > nums.size()/2){ //checks the condn
            return nums[i];    //return reeated value
         }
        }
        return -1;
    }
};


// Boyer-Moore Algorithm
// Only for value > n/2  
// SC -> O(1)
// TC -> O(n)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0,ans=0;

        for(int i=0;i<nums.size();i++){
            if(freq==0){
                ans=nums[i];
            }

            if(nums[i]==ans){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};