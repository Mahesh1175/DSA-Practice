#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n=strs.size();
        string res=strs[0];

        for(int i=1;i<n;i++){
            while(strs[i].find(res)!=0){
                res.pop_back();
                if (res.empty()) return ""; // no common prefix
            }
        }
        return res;
    }
};