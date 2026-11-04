class Solution {
public:
    int minRotations(string s) {
       int ans = 0;
       int pointer = 0;
       for(int i = 0 ; i  < s.size() ; i++){
            int d = abs(pointer - (s[i] - '0'));
            ans += min(d , 10-d);
            pointer  = s[i] - '0';
       } 
    return ans;   }
};