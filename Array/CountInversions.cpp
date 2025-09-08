
// User function Template for CPP
#include<iostream>
#include<vector>
using namespace std;

//merge the sorted subarrays 
int mergeOnly(vector<int> &arr,int st,int mid,int ed){
    int i=st;
    int j=mid+1;
    int inv_cnt=0;
    vector<int> temp;
    
    while(i<=mid && j<=ed){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            inv_cnt+=(mid-i+1); //count inversions
            j++;
        }
    }
    
    while(i<=mid){
         temp.push_back(arr[i]);
        i++;
    }
    
    while(j<=ed){
         temp.push_back(arr[j]);
        j++;
    }
    
    for (int k = st; k <= ed; k++) {
        arr[k] = temp[k - st];
    }
    
    return inv_cnt;
}

//divide the array
int mergeSort(vector<int> &arr,int st,int ed){
    
    if(st<ed){
        int mid=st+(ed-st)/2;
        
        int lcnt= mergeSort(arr,st,mid); //divide left subarray
        int rcnt= mergeSort(arr,mid+1,ed); //divide right subarray
        
        //combine subarrays together
        int inversecnt= mergeOnly(arr,st,mid,ed);
        
        return inversecnt+lcnt+rcnt;
    }
    return 0;
    
}



class Solution {
  public:
    int inversionCount(vector<int> &arr) {
         int n=arr.size();
         return mergeSort(arr,0,n-1);
        
    }
};