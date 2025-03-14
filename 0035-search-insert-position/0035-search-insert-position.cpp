class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l =0 , h =n-1;

        while(l<=h){
            int mid =(l+h)/2;
            if(nums[mid]==target){
                return mid;
            }

            else if(target>nums[mid]){
                l=mid+1;
                
            }
            else{
                h=mid-1;
            }
        }

        int mid = (l+h)/2;

        if(nums[mid]>target){
            if(mid==0){
                return 0;
            }
            return mid-1;
        }
        else{
            return mid+1;
        }
    }
};