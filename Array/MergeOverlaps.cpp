
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if (intervals.empty()) return res;

        // 1. Sort intervals by start time
        sort(intervals.begin(), intervals.end());

        // 2. Start with first interval
        res.push_back(intervals[0]);

        // 3. Iterate through intervals
        for (int i = 1; i < intervals.size(); i++) {
            // Compare with last interval in result
            if (res.back()[1] >= intervals[i][0]) {
                // Overlap → merge
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            } else {
                // No overlap → push new interval
                res.push_back(intervals[i]);
            }
        }
        return res;
    }
};



//simple
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> temp;
        sort(intervals.begin(),intervals.end());

        temp.push_back(intervals[0]);
        int n=0;

        for(int i=1;i<intervals.size();i++){
            int st=intervals[i][0];
            int en=intervals[i][1];

            if(st>=temp[n][0] && st<=temp[n][1]){
                temp[n][0] = min(st,temp[n][0]);
                temp[n][1] = max(en,temp[n][1]);
            }
            else{
                temp.push_back(intervals[i]);
                n++;
            }
        }

        return temp;
    }
};