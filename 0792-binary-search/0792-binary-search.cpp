class Solution {
public:

    int bSearch(vector<int>& nums,int low , int high,int target){
        if(low>high){
            return -1;
        }

        int mid = (low+high)/2;

        if(nums[mid]==target){
            return mid;
        }

        else if(target>nums[mid]){
            return bSearch(nums,mid+1,high,target);
        }

        else{
            return bSearch(nums,low,mid-1,target);
        }
    }

    int search(vector<int>& nums, int target) {
        return bSearch(nums,0,nums.size()-1,target);
    }
};