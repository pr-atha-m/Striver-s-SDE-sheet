class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int , int> st;
        vector<int> v(2);
        int index1;
        int index2;
        for(int i=0;i<nums.size();i++){
            if(st.find(target-nums[i])!=st.end()){
                index2 = i;
                index1 = st[target - nums[i]];
                
               
                break;
            }
            
            st[nums[i]] = i;
            
        }
        
         v[0] = (index1);
         v[1] = (index2);
        
        
        return v;
    }
};
