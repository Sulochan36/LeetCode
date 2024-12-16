class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> hashMap;
        int l=0,maxLen=0;

        for(int r=0;r<s.length();r++){
            if (hashMap.find(s[r]) != hashMap.end() && hashMap[s[r]] >= l) {
                l = hashMap[s[r]] + 1;
            }

            hashMap[s[r]] = r;
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};