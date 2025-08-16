class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int count = 0;
        int sum = 0;

        // sum and occurrence
        unordered_map<int, int> um{{0, 1}};

        for (int i = 0; i < n; i++)
        {
            sum += nums[i];

            count += um[sum - k];

            um[sum]++;
        }
        return count;
    }
};