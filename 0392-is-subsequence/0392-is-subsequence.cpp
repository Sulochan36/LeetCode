class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = s.size();
        int b = t.size();
        int j=0;
        int cnt =0;
        if(a>b){
            return false;
        }

        for(int i=0;i<t.size();i++){
            if(t[i] == s[j]){
                j++;
                cnt++;
            }
            
        }

        if(j<=a-1 && cnt != a){
            return false;
        }

        return true;
    }
};