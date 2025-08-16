class Solution {
public:
    int subarraySumK(vector<int> &a, int n, int k) {
        int l = 0;
        int minLen = n + 1;
        int sum = 0;

        for (int r = 0; r < n; r++) {
            sum += a[r];

            while (sum >= k && l <= r) {
                minLen = min(minLen, r - l + 1);
                sum -= a[l];
                l++;
            }
        }

        if (minLen == n + 1)
            return -1;
        else
            return minLen;
    }
};
