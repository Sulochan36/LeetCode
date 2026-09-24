class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n =nums.size();

        if(k>n) return 0;

        int l =0;
        long long sum = 0;
        long long maxsum = 0;
        unordered_map<int,int> mp;

        for(int r=0;r<n;r++){
            mp[nums[r]]++;
            sum += nums[r];

            if(r-l+1>k){
                mp[nums[l]]--;

                if(mp[nums[l]]==0){
                    mp.erase(nums[l]);
                }
                
                sum -= nums[l];
                l++;
            }
        
            if(r-l+1 ==k && mp.size() == k){
                maxsum = max(maxsum,sum);
            }

            

        }
        return maxsum;
    }
};