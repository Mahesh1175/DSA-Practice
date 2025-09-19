#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> frq;


        if(s.size()!=t.size()){ //check length first
            return false;
        }

        //count frequency of each char in s
        for(int i=0;i<s.size();i++){
            frq[s[i]]++;
        }

        //decrease frequency for each char in t
        for(int i=0;i<t.size();i++){
           frq[t[i]]--;

           if(frq[t[i]]<0){ // if frequency goes negative, t has extra char not in s
            return false;
           }
        }
         

         return true;
    }
};