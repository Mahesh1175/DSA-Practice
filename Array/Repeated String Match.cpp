class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string repeated = a;

 // Repeat until repeated is at least length of b
        while (repeated.size() < b.size()) {
            repeated += a;
            count++;
        }
        // Check once
        if (repeated.find(b) != string::npos) {
            return count;
        }

     // One more repeat (in case b spans across boundaries)
        repeated += a;
        count++;

        if (repeated.find(b) != string::npos) {
            return count;
        }

        // If still not found
        return -1;
    }
};