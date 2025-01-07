#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        long ans=0,curr=0;
        
        for(int i=0; i<k; i++){
            curr+=arr[i];       //calculating the 1st window
        }
        ans=curr;
        
        for(int j=k; j<n; j++){
            curr+=arr[j];      // adding the nxt element
            curr-=arr[j-k];    // removing the leftmost element of previous window
            ans=max(ans,curr);  //find max sum
        }
        return ans;
    
    }
};