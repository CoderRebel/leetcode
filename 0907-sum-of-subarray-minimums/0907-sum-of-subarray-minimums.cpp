class Solution {
public:
    
    vector<int> nsearray(vector<int> &arr){
        int n = arr.size();
        vector<int> nse1(n);
            stack<int> st1;
            for(int i = n -1 ; i>=0 ; i--){
            while(!st1.empty() && arr[st1.top()] >= arr[i]){
                st1.pop();
            }
            nse1[i] = st1.empty()? n : st1.top();
            st1.push(i);
           } return nse1;
    }
    vector<int> psearray(vector<int> &arr){
        int n = arr.size();
        vector<int> pse1(n);
            stack<int> st2;
            for(int i = 0 ; i < n ; i++){
                while(!st2.empty() && arr[st2.top()] >arr[i]){
                    st2.pop();
                }
                pse1[i] = st2.empty() ? -1 : st2.top();
                st2.push(i);
            } return pse1;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse = nsearray(arr);
        vector<int> pse = psearray(arr);
        int total = 0;
        int mod = 1000000007;
        for(int i = 0 ; i < n ; i++ ){
            int left = i - pse[i];
            int right = nse[i] - i;
            total = (total + (right*left*1LL*arr[i])%mod)%mod;
        }
    return total;

    }
};