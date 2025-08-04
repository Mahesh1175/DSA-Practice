class Solution {
public:
    int maxArea(vector<int>& height) {  //2 ptr approach
        int l=0;
        int r=height.size()-1;
        int maxWater=0;
        int wd,ht;
        while(l<r){
            wd=r-l; 
            ht=min(height[l],height[r]);
            int currVal=wd*ht;
            maxWater=max(maxWater,currVal);

            height[l]<height[r] ? l++ : r--;
        }
        return maxWater;
    }
};