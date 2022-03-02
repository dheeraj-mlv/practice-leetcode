class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix){

        // no of rows and no of columns

        int r=matrix.size();
        int c=matrix[0].size();

        // 2 pointers for marking the reference row

        bool row=false,col=false;

        // traverse through the matrix and mark the reference row elements

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j <c; j++)
            {
                if(matrix[i][j]==0){
                    // belongs to first row then use the markers place
                    if(i==0){
                        row=true;
                    }
                    // else directly mark the corresponding reference row elements
                    else{
                        matrix[i][0]=0;
                    }
                    // 
                    if(j==0){
                        col=true;
                    }
                    // 
                    else{
                          matrix[0][j]=0;
                    }
                }
                
            }
            
        }

        for (int i = 1; i < c; i++)
        {
            if(matrix[0][i]==0){
                for (int j = 0; j < r; j++)
                {
                    matrix[j][i]=0;
                }
                
            }

        }

        for (int i = 1; i < r; i++)
        {
            if(matrix[i][0]==0){
                for (int j = 0; j < c; j++)
                {
                    matrix[i][j]=0;
                }
                
            }

        }

        if(row==true){
            for (int i = 0; i < c; i++)
            {
                matrix[0][i]=0;
            }
            
        }
        if(col==true){
            for (int i = 0; i < r; i++)
            {
                matrix[i][0]=0;
            }
            
        }


    }
};


