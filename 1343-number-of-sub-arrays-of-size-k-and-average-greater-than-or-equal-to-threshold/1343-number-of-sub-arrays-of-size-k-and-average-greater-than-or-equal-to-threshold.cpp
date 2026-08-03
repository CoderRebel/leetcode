class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        //get the threshold of the first window
        int sum = 0;
        int n = arr.size();
        int count = 0;
        for(int i = 0 ; i < k; i++ ){
            sum += arr[i];
           
        }
         if((double)sum/k >= threshold) count++;
         
        for(int i = k ; i < n ; i++){
            sum += arr[i] - arr[i-k];
            if((double)sum/k >= threshold) count++;
        }
  return count;  }
};