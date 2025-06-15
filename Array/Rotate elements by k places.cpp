#include<iostream>
#include<vector>
using namespace std;

//brute force solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        
k=k%n;
        //storing last k elem to temp
        vector<int> temp;
        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);
        }

        //shifting first n-k elements by k positions
        // start shifting from last element(n-k-1)
        for(int i=n-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        } 

        //now push temp elemesnts  back to array
        for (int i=0;i<k;i++){
            nums[i]=temp[i];
        }
    }
};



//optimal solution
class Solution {
public:
    void reverse(int start, int end, vector<int>& arr) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(0, n - k - 1, nums); // Reverse first n-k elements
        reverse(n - k, n - 1, nums); // Reverse last k elements
        reverse(0, n - 1, nums);     // Reverse entire array
    }
};
