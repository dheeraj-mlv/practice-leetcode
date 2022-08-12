class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        
        if(m*n!=r*c) return mat;
        vector<vector<int>> ans(r,vector<int> (c));
        int i=0;
        int j=0;
        
        for(auto x:mat){
            for(auto y:x){
            ans[i][j]=y;
            j++;
            if(j>=c){
                j%=c; i++;
            }   
            } 
        }
        
        return ans;
    }
};