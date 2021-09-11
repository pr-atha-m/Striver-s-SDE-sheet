class Solution {
public:
    
    void rec(int begin , vector<int> &nums , vector<int> v , vector<vector<int>> &res){
        res.push_back(v);
        for(int i=begin;i<nums.size();i++){
            // to avoid duplicates
            if(i!=begin && nums[i] == nums[i-1]){
                continue;
            }
            
            v.push_back(nums[i]);
            rec(i+1 , nums , v , res);
            v.pop_back();
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        sort(nums.begin() , nums.end());
        vector<vector<int>> res;
        vector<int> v;
        
        rec(0 , nums , v , res);
        return res;
    }
};
