class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
         vector<int> count(101, 0);

        // 1. Count frequency
        for (int x : nums)
            count[x]++;

        // 2. Prefix sum
        for (int i = 1; i < 101; i++)
            count[i] += count[i - 1];

        // 3. Build result
        vector<int> ans;
        ans.reserve(nums.size());

        for (int x : nums) {
            if (x == 0)
                ans.push_back(0);
            else
                ans.push_back(count[x - 1]);
        }

        return ans;
    }
};