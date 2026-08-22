class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //basically next greater element with a counter.
        int n = temperatures.size();    
        vector<int> ans(n , 0);
        stack <int> st;
        
        for(int i = n-1 ; i >= 0 ; i--){
            if(st.empty()){
                st.push(i);
                continue;
            }
            while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
              
                st.pop();
             }
            if(!st.empty()){
            ans[i] = st.top() - i;
        }
        st.push(i);
        
   }
   return ans;  }
};