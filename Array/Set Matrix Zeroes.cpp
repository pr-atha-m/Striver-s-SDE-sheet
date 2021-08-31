//Using Extra Space
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int rows = matrix.size();
       int col  = matrix[0].size();
        
        int r[200] = {0};
        int c[200]  = {0};
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j] == 0){
                    r[i] = 1;
                    c[j] = 1;
                }
            }
        }
        
        
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(r[i]== 1 || c[j] == 1 ){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};






// Without Extra Space

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int rows = matrix.size();
       int col  = matrix[0].size();
       int col0 = 1;
        for(int i=0;i<rows;i++){
            if(matrix[i][0] == 0){
                col0 = 0;
            }
            for(int j=1;j<col;j++){
                if(matrix[i][j] == 0){
                   matrix[i][0] = 0;
                   matrix[0][j] = 0;
                    
                }
            }
        }
        
        
        
        for(int i=rows-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(matrix[i][0]== 0 || matrix[0][j] == 0 ){
                    matrix[i][j] = 0;
                }
            }
            if(col0 == 0){
                matrix[i][0] = 0;
            }
        }
    }
};
