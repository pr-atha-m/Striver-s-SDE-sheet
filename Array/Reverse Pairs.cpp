class Solution {
public:
    #define ll long long int
    ll merge(vector<int> &nums , int s , int mid , int e){
        ll pairs = 0;
        ll j = mid+1;
        for(int i = s;i<=mid;i++){
            while(j<=e && 2*(ll)nums[j] < nums[i]){
                j++;
            }
            
            pairs+= (j-(mid+1));
        }
        
        vector<ll> temp;
        
        ll left = s;
        ll right = mid+1;
        while(left<= mid && right<=e){
            if(nums[left]<= nums[right]){
                temp.push_back(nums[left++]);
            }
            else{
                temp.push_back(nums[right++]);
            }
        }
        while(left<=mid){
             temp.push_back(nums[left++]);
        }
        
        while(right<=e){
            temp.push_back(nums[right++]);
        }
        
        
        for(ll i=s;i<=e;i++){
            nums[i] = temp[i-s];
        }
        
        
        return pairs;
    
    }
    
    ll mergeSort(vector<int> &nums , int s , int e){
        if(e>s){
            ll mid = (s+e)/2;
            ll pairs =  mergeSort(nums , s , mid);
            pairs+= mergeSort(nums , mid+1 , e);
            pairs+= merge(nums , s , mid , e);
            return pairs;
            
        }
        
        return 0;
        
        
    }
    int reversePairs(vector<int>& nums) {
        
        int ans = mergeSort(nums , 0 , nums.size()-1);
        
        return ans;
        
    }
};
