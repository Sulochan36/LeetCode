class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n =nums.size();
        int l1 = 0;
        int h1 = max_element(nums.begin(),nums.end())-nums.begin();
        int l2 =h1+1;
        int h2 = n-1;
        int ans = -1;

        if(target<nums[l1]){
            while(l2<=h2){
                int mid = (l2+h2)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(target>nums[mid]){
                    l2=mid+1;
                }
                else{
                    h2 =mid-1;
                }
            }
        }
        else{
            while(l1<=h1){
                int mid = (l1+h1)/2;
                if(nums[mid]==target){
                    return mid;
                }
                else if(target>nums[mid]){
                    l1=mid+1;
                }
                else{
                    h1 =mid-1;
                }
            }
        }

        return ans;

    }
};