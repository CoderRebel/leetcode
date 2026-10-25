class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals; 
        if (intervals.size() == 0) return mergedIntervals;
        sort(intervals.begin() , intervals.end());
        vector<int> tempInterval = intervals[0];
        for(auto it : intervals){
            //if it collides 
            if(it[0] <= tempInterval[1]){
                tempInterval[1] = max(it[1] , tempInterval[1]);
            }
             //if not collides then add to the current interval to the ansewr and assign new interval as current
            else{
                mergedIntervals.push_back(tempInterval);
                tempInterval = it;
            }
           
        }
        mergedIntervals.push_back(tempInterval);
    return mergedIntervals;}
};