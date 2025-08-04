#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <climits>
using namespace std;

int minCostToBuyAllTypes(vector<int>& candies) {
    // Step 1: Get the number of unique candy types
    unordered_set<int> uniqueTypes(candies.begin(), candies.end());
    int required = uniqueTypes.size();  // total types needed

    // Step 2: Sliding window variables
    unordered_map<int, int> freq; // to count frequencies in the window
    int left = 0, unique = 0, total = 0, minCost = INT_MAX;

    // Step 3: Move the right pointer to expand the window
    for (int right = 0; right < candies.size(); right++) {
        freq[candies[right]]++;
        total += candies[right];

        // If it's the first time we added this candy type
        if (freq[candies[right]] == 1)
            unique++;

        // Step 4: Try to shrink the window while it's valid
        while (unique == required) {
            minCost = min(minCost, total);  // update minimum cost

            // Shrink from the left
            freq[candies[left]]--;
            total -= candies[left];
            if (freq[candies[left]] == 0)
                unique--;  // we lost one unique type

            left++;
        }
    }

    return minCost;
}
