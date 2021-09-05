class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int start = 0;
        int end = 0;
        int max1 = 0;
        int n = s.length();
        unordered_map<char , int> mp;
        while(end<n){
            
           
            mp[s[end]]++;
            
            if(mp[s[end]] == 1){
                max1 = max(max1 , end-start+1);
                end++;
            }
            else{
                
                while(start<end && mp[s[end]]!=1){
                    mp[s[start]]--;
                    start++;
                }
                end++;
            }
            
        }
        
        
        return max1;
    }
};
