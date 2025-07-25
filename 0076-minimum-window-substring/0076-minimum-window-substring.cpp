class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> hash;
        int l = 0, r = 0, minLen = INT_MAX, sIndex = -1, cnt = 0;
        int n = s.size(), m = t.size();

        // Build frequency map for string t
        for (char c : t) {
            hash[c]++;
        }

        unordered_map<char, int> window;

        while (r < n) {
            char c = s[r];
            window[c]++;

            // If character count in window doesn't exceed what's in t, increment cnt
            if (hash.count(c) && window[c] <= hash[c]) {
                cnt++;
            }

            // Try to shrink window from left while it contains all characters
            while (cnt == m) {
                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    sIndex = l;
                }

                char leftChar = s[l];
                window[leftChar]--;

                // If leftChar is in t and we're now missing one, decrease count
                if (hash.count(leftChar) && window[leftChar] < hash[leftChar]) {
                    cnt--;
                }

                l++;
            }

            r++;
        }

        return sIndex == -1 ? "" : s.substr(sIndex, minLen);
    }
};
