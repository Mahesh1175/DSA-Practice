#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;


class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";

         reverse(s.begin(),s.end()); //to reverse each chara of the string


         for(int i=0;i<n;i++){
             string word="";    
            while(i<n && s[i]!= ' '){    //run till we get a space or end of string(word completed)
                word+=s[i];   //collect the word
                i++;
            }
            reverse(word.begin(),word.end()); //reverse the collected word

          if(word.length() >0){
            ans+= ' '+word;   //add space before each word except the first word
          }

         }


        return ans.substr(1);
    }
};