#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

//s.find(part) gives starting index of part in s, part.length() gives length of part

class Solution {
public:
    string removeOccurrences(string s, string part) {

       while(s.size()>0 && s.find(part)<s.size()){
            s.erase(s.find(part),part.length());  
        }
        return s;      
    }
};