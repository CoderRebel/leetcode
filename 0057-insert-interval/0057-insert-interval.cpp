class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
       
        vector<vector<int>> mergedIntervals;
        if(intervals.size() == 0){
            mergedIntervals.push_back(newInterval);
            return mergedIntervals;
        }
        intervals.push_back(newInterval); 
        sort(intervals.begin(),  intervals.end());
        vector<int> tempInterval = intervals[0];
        for(auto it : intervals){
            if(it[0] <= tempInterval[1]){
                tempInterval[1] = max(tempInterval[1] , it[1]);
            }
            else{
                mergedIntervals.push_back(tempInterval);
                tempInterval = it;
            }
        }
        mergedIntervals.push_back(tempInterval);
    return mergedIntervals;}
};