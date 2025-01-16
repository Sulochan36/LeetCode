class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans=0;

        int m = nums2.size();
        if(m&1){
            for(int x:nums1){
                ans^=x;
            }
        }

        int n=nums1.size();
        if(n&1){
            for(int x:nums2){
                ans^=x;
            }
        }

        return ans;
    }
};