class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> st;
        int n = s.size();
        st.insert(s[0]);
        for(int i = 1 ; i< n ; i++){
            if(st.find(s[i]) != st.end()){
                return s[i];
            }
            st.insert(s[i]);
        }
       
    return s[0];}
};