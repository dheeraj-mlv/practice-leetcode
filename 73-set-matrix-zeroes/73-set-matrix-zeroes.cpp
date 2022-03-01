class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int r,c;

         r=matrix.size();

         c=matrix[0].size();

        // unordered map or set to store the values and traverse at the end 

        unordered_map<int,int> row;
        unordered_map<int,int> col;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j <c; j++)
            {
                if(matrix[i][j]==0){
                    row[i]++;
                    col[j]++;
                }
            }
            
        }
        
        for(auto x:row){
            // make all elements of the row zero

            int row_number=x.first;

            for (int i = 0; i < c; i++)
            {
                matrix[row_number][i]=0;
            }
 
        }

        for(auto x:col){
            int col_number=x.first;
            for (int i = 0; i < r; i++)
            {
                matrix[i][col_number]=0;
            }
            
        }









       

    }
};
