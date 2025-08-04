class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxVal=0, minVal=INT_MAX;

        for(int i=0;i<n;i++){
            minVal=min(minVal,prices[i]);//finding min value through loop
            maxVal=max(maxVal,prices[i]-minVal); 
            //from that min value substract the current prices,
            //then max between values  
        }
        return maxVal;
    }
};