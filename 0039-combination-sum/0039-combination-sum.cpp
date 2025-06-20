class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<int>& combination, vector<vector<int>>& results, int start) {
        if (target == 0) {
            results.push_back(combination);
            return;
        }

        for (int i = start; i < candidates.size(); ++i) {
            if (candidates[i] > target) continue;

            combination.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], combination, results, i); 
            combination.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> results;
        vector<int> combination;
        backtrack(candidates, target, combination, results, 0);
        return results;
    }
};
