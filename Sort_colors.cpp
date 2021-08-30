
//https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int start = 0;
        int mid = 0;
        int end = n-1;
        while(mid<=end){
            if(nums[mid] == 0){
                //swapping all zeros to the start of the array.
                swap(nums[mid] , nums[start]);
                start++;
                mid++;   
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                
                //swapping all 2's to the end of the array.
                swap(nums[mid] , nums[end]);
                end--;
            }
            
            
        }
    }
};

//Pratham