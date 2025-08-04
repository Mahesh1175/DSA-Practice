class Solution {
public:
    double myPow(double x, int n) {
        long binVal = n; // Use long to handle the case when n is INT_MIN
        if (n < 0) { //if n is negative 
            x = 1 / x;
            binVal = -binVal;
        }

        double ans = 1;
        while (binVal > 0) {
            if (binVal % 2 == 1) {  //find the last bit of binary value
                // If the last bit is 1, multiply ans by x
                ans = ans * x;
            }
            x = x * x; // Square x for the next bit
            binVal = binVal / 2; // Shift right to process the next bit
        }
        return ans;
    }
};