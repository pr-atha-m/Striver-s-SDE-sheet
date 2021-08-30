// problem-Link : https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        //kadane algorithm 
        int n = nums.size();
        int max_sum = nums[0];
        for(int i=0;i<n;i++){
            sum+= nums[i];
            if(sum>max_sum){
                max_sum = sum;
            }
            if(sum<0){
                // if sum becomes less than we will not consider that subarray and reset the sum
                // to zero
                sum = 0;
            }
            
            
        }
        return max_sum;
        
    }
};