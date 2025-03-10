class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mpp;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }

        for(auto a : mpp){
            s.insert(a.second);

        }

        return mpp.size() == s.size();
    }
};