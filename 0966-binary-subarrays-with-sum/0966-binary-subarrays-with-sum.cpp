class Solution {
public:

    int countSub(vector<int>& nums, int goal){
        int l =0,r=0,count=0,sum=0;

        while(r<nums.size()){

            if(goal<0){
                return 0;
            }
            sum = sum + nums[r];
            while(sum>goal){
                sum = sum - nums[l];
                l = l+1;
            }
            count = count + (r-l+1);
            r=r+1;
        }

        return count;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countSub(nums, goal) - countSub(nums, goal-1);
    }
};