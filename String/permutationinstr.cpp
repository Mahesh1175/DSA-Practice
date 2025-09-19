#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

//check permutation of s1 long string in s2 
//  s1 = "ab", s2 = "eidbaooo"
// window+map

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();

        vector<int> freq1(26,0), freq2(26,0);

     //count the freq for s1- to check in the long string
      for(int i=0;i<m;i++){
        freq1[s1[i]-'a']++;
      }

      for(int i=0;i<n;i++){
        freq2[s2[i]-'a']++;
       
       //if window size is increasing than the s1 ,remove freq count from left by -m
        if(i>=m){ 
            freq2[s2[i - m] - 'a']--;
        }
          if(freq1==freq2) return true;

      }

      return false;
    }
};