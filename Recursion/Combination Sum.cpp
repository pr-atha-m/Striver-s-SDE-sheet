class Solution {
public:
    
    void recursive(vector<int> &candidates , int target , int sum , vector<vector<int>> &ans , vector<int> &v , int n){
        if(sum == target){
            ans.push_back(v);
            return;
        }
        if(sum>target){
            return;
        }
        
        for(int i=n;i<candidates.size();i++){
            v.push_back(candidates[i]);
            recursive(candidates , target , sum+candidates[i] , ans , v , i);
            v.pop_back();
            
        }
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        vector<vector<int>> ans;
        int sum = 0;
        recursive(candidates , target , sum , ans , v , 0);
        return ans;
    }
};
