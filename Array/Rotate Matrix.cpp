
class Solution {
public:
    
    void reverse(vector<int> &v){
        
        int i=0;
        int j=v.size()-1;
        while(i<j){
            swap(v[i] , v[j]);
            i++;
            j--;
        }
        
        return;
        
    }
    void rotate(vector<vector<int>>& matrix) {
        
        //Taking Transposing of Matrix.
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<i;j++){
               swap(matrix[i][j] , matrix[j][i]);
            }
            
        }
           
      for(int i=0;i<rows;i++){
            reverse(matrix[i]);
        }
        
        
     
        
    }
};
