class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            // check if it is left sorted
            else if (nums[mid] >= nums[low]) {
                // check if the target is in the sorted left
                if (target >= nums[low] && target < nums[mid]) {
                    high = mid - 1;
                } else {
                    // if the target is in the unsorted right
                    low = mid + 1;
                }
            } else if (nums[mid] <= nums[high]) {
                // check if the target is in the sorted right
                if (target >= nums[mid] && target <= nums[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
   return -1; }
};