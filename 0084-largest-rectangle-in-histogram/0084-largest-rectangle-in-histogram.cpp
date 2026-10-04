class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int nse;
        int pse;
        int n = heights.size();
        int maxArea = 0;
        int elem;
        for(int i = 0 ; i  < n ; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                elem = st.top();
                st.pop();
                    nse = i;
                     pse = st.empty()? -1:st.top();
                    maxArea = max(maxArea , heights[elem] * (nse - pse -1));
            }
            st.push(i);
        }
        while(!st.empty()){
            nse = n;
            elem = st.top();
             st.pop();
            pse = st.empty()?-1 : st.top();
            maxArea = max(maxArea , (nse - pse - 1)* heights[elem]);
           
        }
    return maxArea;}
};