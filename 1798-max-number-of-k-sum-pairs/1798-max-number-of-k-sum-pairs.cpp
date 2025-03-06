class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int, int> m;
        int result = 0;

        for(auto i : nums) 
    {
        if (m.find(i) != m.end() && m[i] > 0)
        {
            m[i] = m[i] - 1;
            result++;
        }
        else
        {
            m[k - i] = m[k - i] + 1;
        }
    }
    return result;
    }
};