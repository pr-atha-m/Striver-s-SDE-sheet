class Solution {
public:
    
    void rec(vector<int> &candidates , int target , vector<vector<int>> &vec , vector<int> &v ,int sum , int begin){
        if(sum>target){
            return;
        }

        
        if(sum == target){
            vec.push_back(v);
            return;
        }
        
        for(int i=begin;i<candidates.size();i++){
            if(i!=begin && candidates[i] == candidates[i-1]){
                continue;
            }
            
            v.push_back(candidates[i]);
            rec(candidates , target , vec , v , sum+candidates[i] , i+1);
            v.pop_back();            
            
        }
        
        
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> vec;
        vector<int> v;
        sort(candidates.begin() , candidates.end());
        int sum = 0;
        int begin = 0;
        rec(candidates , target , vec , v ,sum , begin);
        return vec;
        
    }
};
