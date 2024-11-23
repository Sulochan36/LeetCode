class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l =0 , h =n-1;
        vector<int> result(2,-1);

        while(l<=h){
            int mid =(l+h)/2;
            if(nums[mid]==target){
                h = mid-1;
            } 

            else if(target>nums[mid]){
                l=mid+1;
                
            }
            else{
                h=mid-1;
            }
        }

        if(l<n && nums[l]==target){
            result[0] = l;
        }

         l =0 , h =n-1;
                while(l<=h){
            int mid =(l+h)/2;
            if(nums[mid]==target){
                l = mid+1;
            } 

            else if(target>nums[mid]){
                l=mid+1;
                
            }
            else{
                h=mid-1;
            }
        }

        if(h>=0 && nums[h]==target){
            result[1] = h;
        }

        return result;

    }
};