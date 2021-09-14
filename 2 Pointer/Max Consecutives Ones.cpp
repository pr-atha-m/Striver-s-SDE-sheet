class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1 = 0;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                if(count> max1){
                    max1 = count;
                }
                
                count = 0;
            }
            else{
                count++;
            }
            
        }

         if(count> max1){
                    max1 = count;
                }
        
        return max1;
        }
};
