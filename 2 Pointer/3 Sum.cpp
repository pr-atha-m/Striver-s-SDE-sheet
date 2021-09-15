class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin() , nums.end());
        for(int i=0;i<n;i++){
            int s = i+1;
            int e = n-1;
            while(e>s){
                int sum = nums[e]+nums[s];
                if(sum +  nums[i] == 0){
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[e]);
                    v.push_back(nums[s]);
                    ans.push_back(v);
                    while(e>s && nums[s] == nums[s+1]){
                        s++;
                    }
                    
                    while(e>s && nums[e] == nums[e-1]){
                        e--;
                    }
                    
                    s++;
                    e--;
                }
                else if(sum + nums[i] > 0){
                    e--;
                }
                else{
                    s++;
                }
            }
            
            
            while(i+1 < n && nums[i] == nums[i+1]){
                i++;
            }
        }
        
        
        return  ans;
        
    }
};
