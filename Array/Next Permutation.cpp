class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = nums.size();
        int flag = 0;
        int i;
        for(i=n-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                flag = 1;
                break;
                
            }
        
        }
        
        if(flag == 0){
            sort(nums.begin() , nums.end());
            return;
        }
        int min1 = INT_MAX;
        int index = 0;
        for(int j=n-1;j>=i;j--){
            if(nums[j]>nums[i-1] && min1>nums[j]){
                min1 = nums[j];
                index = j;
            }
        }
        
        
        swap(nums[i-1] , nums[index]);
        
       
        sort(nums.begin()+ i, nums.end());
        return;
        
    }
};
