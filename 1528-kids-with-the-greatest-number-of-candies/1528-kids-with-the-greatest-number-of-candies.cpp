class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size(), false);

        int n = candies.size();
        int max_candies = *max_element(candies.begin(), candies.end());

        for(int i=0;i<n;i++){
            if((candies[i] + extraCandies)>=max_candies){
                result[i] = true;
            }
        }

        return result;
    }
};