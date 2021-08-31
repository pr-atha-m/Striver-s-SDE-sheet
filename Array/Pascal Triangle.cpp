class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> v;
        v.push_back(1);
         ans.push_back(v);
        if(numRows == 1){
        return ans;
        }

        for(int i=2;i<=numRows;i++){
            v.clear();
            v.push_back(1);
            for(int j=1;j<i-1;j++){
                v.push_back(ans.back()[j-1] + ans.back()[j]);
            }
            
            v.push_back(1);
            ans.push_back(v);
               
        }
        return ans;
        
        
    }
};
