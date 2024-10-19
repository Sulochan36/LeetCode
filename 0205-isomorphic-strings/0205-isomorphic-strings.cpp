class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> map_s(256,-1);
        vector<int> map_t(256,-1);

        for(int i=0;i<s.length();i++){
            char s_char = s[i];
            char t_char = t[i];

            if(map_s[s_char]!=map_t[t_char]){
                return false;
            }

            map_s[s_char] = i;
            map_t[t_char] = i;
        }
        return true;
    }
};