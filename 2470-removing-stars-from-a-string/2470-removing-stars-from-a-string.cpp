class Solution {
public:
    string removeStars(string s) {
        int l = s.length();
        stack<char> st;

        for(int i=0;i<l;i++){
            if(s[i]=='*' && !st.empty()){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }

        string result;

        while(!st.empty()){
            result.push_back(st.top());
            st.pop();

        }

        reverse(result.begin(),result.end());
        return result;
    }
};