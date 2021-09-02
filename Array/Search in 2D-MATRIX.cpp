class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // The array is row and column wise sorted
        
        // we will start search from top-right corner
        int rows = matrix.size();
        int cols = matrix[0].size();
        int row = 0;
        int col = cols-1;
        
        while(row<rows && col>=0){
            if(matrix[row][col] == target){
                return true;
            }
            
            else if(matrix[row][col]>target){
                col--;
            }
            
            else{
                row++;
            }
        }
        
        
        
        return false;
    }
};
