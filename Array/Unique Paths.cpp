// GOOGLE interview question 
class Solution {
public:
    int uniquePaths(int m, int n) {
        // using Dynamic Programming.
        // Base Conditions.
        
        
        // If m = 1 then there is only 1 unique path and similarly for n = 1 there
        // is only one path.
        
        int dp[n+1][m+1];
        for(int i=1;i<=m;i++){
            dp[1][i] = 1;
        }
        
        for(int i=1;i<=n;i++){
            dp[i][1] = 1;
        }

        for(int i=2;i<=n;i++){
            for(int j=2;j<=m;j++){
                // At each Block (i , j) we can reach from either top ie (i-1 , j)
                // or left ie (i , j-1)
                
                // so we add up all the possible ways.
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
                
            }
        }
        return dp[n][m];
    }
};



// Optimal Solution.

class Solution {
public:
    int uniquePaths(int m, int n) {
        // to reach end from start 
        // it is fix that robot has to move n-1 times right
        // and m-1 times down
        
        // so total moves are m-1 + n-1 = m+n-2
        // so we can simply calculate Unique paths
        // by finding combinations of right and down
        
        
        
        // Total unique paths
        int N = n+m-2;
        double ans = 1;
        int r = m-1;
        for(int i=1;i<=r;i++){
            
            ans = ans*(N-r+i)/i;
        }
        
        return (int)ans;
        
    }
};
