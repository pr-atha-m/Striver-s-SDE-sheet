// O(n) solution.
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        
        
        int max_len = 0;
        for(int i=0;i<n;i++){
            if(st.find(nums[i]-1)==st.end()){
                int count = 1;
                while(st.find(nums[i]+count)!=st.end()){
                    count++;
                }
            
                
                max_len = max(max_len , count);
            }
        }
        
    
        return max_len;
    }
};
