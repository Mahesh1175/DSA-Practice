// Brute force appraoch 
// TC: O(n) and SC: O(n)
class Solution {
public:
    int trap(vector<int>& height) {
       int n=height.size();
       int total=0;
       vector<int> lmax(n,0);
       vector<int> rmax(n,0);

       //calculate left max for each element and store in lmax array
        lmax[0] = height[0];
       for(int i=1;i<n;i++){
        lmax[i]=max(height[i],lmax[i-1]);
        
       }

        //calculate right max for each element and store in rmax array
       rmax[n-1] = height[n-1];
       for(int i=n-2;i>=0;i--){
        rmax[i]=max(height[i],rmax[i+1]);

       }

         //calculate the water trapped at each index
       for(int i=0;i<n;i++){
        int val=min(lmax[i],rmax[i]);
        total+= val-height[i];
       }

return total;
    }
};




//Optimized approach using two pointers TC: O(n) and SC: O(1)
// This approach uses two pointers to calculate the trapped water without extra space.
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int total = 0;
        int l=0,r=n-1;
        int lmax=0;
        int rmax=0;

        while(l<r){
            lmax=max(height[l],lmax);
            rmax=max(height[r],rmax);

            if(lmax<rmax){
                total+= lmax-height[l];
                l++;
            }
            else{
                total+= rmax-height[r];
                r--;
            }
        }
    
        return total;
    }
};