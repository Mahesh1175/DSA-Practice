int lengthOfLongestSubstring(string s) {
    vector<int> lastIndex(256, -1);  // last seen index of each ASCII char
    int n = s.size();
    int left = 0, maxLen = 0;

    for (int right = 0; right < n; right++) {
        if (lastIndex[s[right]] >= left) {
            // duplicate inside window -> move left past its previous spot
            left = lastIndex[s[right]] + 1;
        }
        lastIndex[s[right]] = right;                 // update last seen
        maxLen = max(maxLen, right - left + 1);      // window size
    }
    return maxLen;
}
