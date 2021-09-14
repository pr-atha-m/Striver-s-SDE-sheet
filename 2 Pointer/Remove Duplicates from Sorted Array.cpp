class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 0){
            return 0;
        }
        
        int curr = nums[0];
        
        int count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[count-1]){
                swap(nums[i] , nums[count++]);
                curr  = nums[i];
               
            }
            
        }
        
        
        return count;
        
    }
};
