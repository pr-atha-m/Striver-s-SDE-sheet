// using Extra Space
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int rightMax[n];
        rightMax[n-1] = prices[n-1];
        for(int i=n-2;i>=0;i--){
            rightMax[i] = max(rightMax[i+1] , prices[i]);
        }
        
        
        int maxProfit = 0;
        
        for(int i=0;i<n;i++){
            maxProfit = max(maxProfit , rightMax[i] - prices[i]);
        }
        
        return maxProfit;
        
    }
    
};

// without using Extra Space

// we will maintain a variable Left_min which will store minimum price of stock of previous days.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n = prices.size();
      int left_min = prices[0];
        
      int maxProfit = 0;
        for(int i=1;i<n;i++){
            maxProfit = max(maxProfit , prices[i] - left_min);
            left_min = min(left_min , prices[i]);
        }
        
        
        return maxProfit;
        
    }
    
};
