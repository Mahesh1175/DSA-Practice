#include<iostream>
#include<string>
using namespace std;

bool isAlphaNum(char s) {
    if ((s >= '0' && s <= '9') || 
        (tolower(s) >= 'a' && tolower(s) <= 'z')) {
        return true;
    }
    return false;
}

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (!isAlphaNum(s[l])) {
                l++;
                continue;// go back to top of loop, don’t compare yet
            }
            if (!isAlphaNum(s[r])) {
                r--;
                continue; // go back to top of loop, don’t compare yet
            }

            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++; r--;
        }
        return true;
    }
};