class Solution {
public:
    
     // we need pse , nse , pge and nge 
        // function for pse and nse 
        vector<int> prevSmaller(vector<int> &nums){
            int n = nums.size();
            stack<int> st1;
            vector<int> psearr(n);
            for(int i = 0 ; i < n ; i++){ while(!st1.empty() && nums[st1.top()] >= nums[i] ){
                st1.pop();
            }
            psearr[i] = st1.empty()? -1 : st1.top();
            st1.push(i);
            }
           return psearr;
        }
        vector<int> nextSmaller(vector<int> &nums){
            int n = nums.size();
              stack<int> st2;
            vector<int> nsearr(n);
            for(int i = n-1 ; i >=0 ; i--){ while(!st2.empty() && nums[st2.top()] > nums[i] ){
                st2.pop();
            }
            nsearr[i] = st2.empty()? n : st2.top() ;
            st2.push(i);
            }
           return nsearr;
        }
        //function for nge and pge 
        vector<int> prevGreater(vector<int> &nums){
            int n = nums.size();
             stack<int> st3;
            vector<int> pgearr(n);
            for(int i = 0 ; i < n ; i++){ while(!st3.empty() && nums[st3.top()] < nums[i] ){
                st3.pop();
            }
            pgearr[i] = st3.empty()? -1 : st3.top();
            st3.push(i);
            }
           return pgearr;
        }
        vector<int> nextGreater(vector<int> &nums){
            int n = nums.size();
            stack<int> st4;
            vector<int> ngearr(n);
            for(int i = n-1 ; i >=0 ; i--){ while(!st4.empty() && nums[st4.top()] <= nums[i] ){
                st4.pop();
            }
            ngearr[i] = st4.empty()? n : st4.top();
            st4.push(i);
            }
           return ngearr;
        }


    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
       // we need SumMax - SumMin
       long long sumMax = 0 ;
       long long sumMin = 0;
       vector<int> pge = prevGreater(nums);
       vector<int> nge = nextGreater(nums);
       vector<int> nse = nextSmaller(nums);
       vector<int> pse = prevSmaller(nums);
       for(int i = 0; i < n ; i++){
        sumMax = sumMax + 1LL * (nge[i] - i) * (i - pge[i]) * nums[i];
        sumMin = sumMin + 1LL *(nse[i] - i) * (i - pse[i]) * nums[i];
       }
    return sumMax - sumMin;
    }
};