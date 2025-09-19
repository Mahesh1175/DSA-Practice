#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;



class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp; // map sorted string to list of anagrams

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end()); // anagrams have same sorted form
            mp[key].push_back(s);
        }
        /*
        {
  "aet" : ["eat", "tea", "ate"],
  "ant" : ["tan", "nat"],
  "abt" : ["bat"]
}
        */

        vector<vector<string>> ans;
        for (auto& p : mp) {
            ans.push_back(p.second);
        }

        /*
        ["eat","tea","tan","ate","nat","bat"]
        */
        return ans;
    }
};