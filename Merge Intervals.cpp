//problem_link : https://leetcode.com/problems/merge-intervals/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        int n = intervals.size();
        sort(intervals.begin() , intervals.end());
        
        v.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            if(intervals[i][0]>v.back()[1]){
                
                v.push_back(intervals[i]);
            }
            else{
                // merging interval if start of new interval is less than end of previous
                // interval
                v.back()[1] = max(v.back()[1] , intervals[i][1]);
            }
            
        }
        
        return v;
    }
};
