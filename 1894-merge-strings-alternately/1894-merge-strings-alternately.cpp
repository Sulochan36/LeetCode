class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answer = "";
        int l1 = word1.length();
        int l2 = word2.length();
        int m,n;
        string w;

        if(l1>l2 || l1==l2){
            n = l1;
            m =l2;
            w = word1;
        }
        else{
            n = l2;
            m= l1;
            w = word2;
        }

        for(int i = 0 ;i<m;i++){
            answer += word1[i];
            answer += word2[i];
        }

        if(m==n){
            return answer;
        }
        else{
            for(int i=m;i<n;i++){
                answer += w[i];
        }
        }
        return answer;
    }
};