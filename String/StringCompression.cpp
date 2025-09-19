#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

// Input: chars = ["a","a","b","b","c","c","c"]
// Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
// Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

class Solution {
public:
    int compress(vector<char>& chars) {
       vector<char> ans;
        int n = chars.size();
        int i = 0;

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            // count consecutive chars
            while (i < n && chars[i] == curr) {
                count++;
                i++;
            }

            ans.push_back(curr); // push the char
            if (count > 1) {
                string cntStr = to_string(count);
                for (char c : cntStr) {
                    ans.push_back(c); // push digits of count
                }
            }
        }

        // write back to original array
        for (int j = 0; j < ans.size(); j++) {
            chars[j] = ans[j];
        }

        return ans.size();
    }
};


//2 soln optimized

class Solution {
public:
    int compress(vector<char>& chars) {
          int n = chars.size();
        int idx = 0; // position to write in chars
        
        for (int i = 0; i < n;) {
            char curr = chars[i];
            int count = 0;
            
            // count consecutive chars
            while (i < n && chars[i] == curr) {
                i++;
                count++;
            }
            
            // write char
            chars[idx++] = curr;
            
            // write count if > 1
            if (count > 1) {
                string cntStr = to_string(count);
                for (char c : cntStr) {
                    chars[idx++] = c;
                }
            }
        }
        
        return idx;
    }
};