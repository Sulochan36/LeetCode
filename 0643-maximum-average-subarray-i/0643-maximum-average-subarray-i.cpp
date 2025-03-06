class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxAvg = 0.00000;
        int sum = 0;
        for (int i = 0; i < k; i++){
            sum += nums[i];
        }

        maxAvg =(double) sum/k;
        int window_sum =sum;
        
        double window_avg = maxAvg;
        cout<<window_avg<<endl;

        for(int i=k;i<n;i++){
            window_sum += nums[i] - nums[i - k];
            window_avg =(double) window_sum/k;
            
            cout<<window_avg<<endl;
            maxAvg = max(maxAvg, window_avg);
        }
        return maxAvg;
    }
};