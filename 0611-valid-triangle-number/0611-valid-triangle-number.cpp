class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left,right;
        int count =0;
        for(int k = nums.size()-1;k>=2;k--){
            left = 0;
            right=k-1;
            while(left<right){
                if(nums[left] + nums[right] > nums[k]){
                    count += right -left;
                    right--;
                }
                else{
                    left++;
                }
            }
            
        }
        return count;
    }
};