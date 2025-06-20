class Solution {
public:
    void subsetHelp( vector<int> nums, vector<int> output,int i,vector<vector<int>>& ans){
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }

        subsetHelp(nums,output,i+1,ans);

        int element = nums[i];
        output.push_back(element);
        subsetHelp(nums,output,i+1,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int i =0;
        subsetHelp(nums,output,i,ans);
        return ans;
    }
};