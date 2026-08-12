class Solution {
public:
    int helper(int n){
 int result = 0 ;
        while( n > 0 ){
        int digit = n % 10;
        result += digit * digit;
        n = n/10;
        }
   return result; }
    bool isHappy(int n) {
      unordered_set<int> st;
      while(n!=1){
      if(st.count(n)){
        return false;
      }
      st.insert(n);
      n = helper(n);
      }
   return true; }
};