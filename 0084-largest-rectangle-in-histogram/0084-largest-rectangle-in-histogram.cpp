class Solution {
public:
    vector<int> nsearray(vector<int> &heights){
        int n = heights.size();
        vector<int> nextsmaller(heights.size());
        stack<int> st1;
        for(int i = heights.size()- 1; i>=0 ; i--){
        while(!st1.empty() && heights[st1.top()] >= heights[i]){
            st1.pop();
        }
        nextsmaller[i] = st1.empty()? n : st1.top();
        st1.push(i);
        }
        return nextsmaller;
    }

      vector<int> psearray(vector<int> &heights){
        int n = heights.size();
        
        vector<int> previoussmaller(heights.size());
        stack<int> st2;
        for(int i = 0; i<n ; i++){
        while(!st2.empty() && heights[st2.top()] >= heights[i]){
            st2.pop();
        }
        previoussmaller[i] = st2.empty()? -1 : st2.top();
        st2.push(i);
        }
   return previoussmaller; }




    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse = nsearray(heights);
        vector<int> pse = psearray(heights);
        int maxArea = 0;
        for(int i = 0 ; i < n ; i++){
            int area;
            area = heights[i] * (nse[i]-pse[i]-1);
            maxArea = max(maxArea , area);
        }
   return maxArea; }
};