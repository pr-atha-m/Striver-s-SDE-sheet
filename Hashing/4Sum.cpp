class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            
            for(int j=i+1;j<n;j++){
             
             
                int s = j+1;
                int end = n-1;
                int target2 = target - nums[i]-nums[j];
                vector<int> v1;
                while(s<end){
                   int sum = nums[s]+nums[end];
                    if( sum == target2){
                        v1.clear();
                        v1.push_back(nums[i]);
                         v1.push_back(nums[j]);
                         v1.push_back(nums[s]);
                         v1.push_back(nums[end]);
                        v.push_back(v1);
                        while(s<end && nums[s]==nums[s+1]){
                            s++;
                        }
                        while(s<end && nums[end]==nums[end-1]){
                            end--;
                        }
                        
                        s++;
                        end--;
                    }
                    else if(sum > target2){
                        end--;
                    }
                    else{
                        s++;
                    }
                    
                    
                    
                  
                }
                  while(j+1 < n && nums[j+1]==nums[j]){
                        j++;
                    }
                
            }
            
            
            while(i+1 < n && nums[i+1]==nums[i]){
                        i++;
                    }
            
        }
        
        
        return v;
    }
};
