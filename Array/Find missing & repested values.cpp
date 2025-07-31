class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> mp;
        int n=grid.size();
        int repeated=-1,missing=-1;
        //flaten the arry 1st
        for(auto& val : grid){
            for(int num : val){
            mp[num]++;
        }
    }
//find missing and repeated element
      for(int i=1;i<=n*n;i++){
        
        if(mp[i]>1){
            repeated=i;
        }
        else if(mp[i]==0){
            missing=i;
        }
      }


        return {repeated,missing};
    }
};

