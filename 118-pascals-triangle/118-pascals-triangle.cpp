class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        int n=numRows;

        vector<int> v;
        v.push_back(1);
        
        vector<vector<int>> ans;
        ans.push_back({1});

        cout<<1<<endl;

        for (int i = 1; i < n; i++)
        {
           vector<int> temp;
           temp.push_back(1);

           for (int i = 1; i < v.size(); i++)
           {
               temp.push_back(v[i]+v[i-1]);
           }

           temp.push_back(1);


           for(auto x:v){
               v.pop_back();
           }


           for(auto x:temp){
               v.push_back(x);
           }


           for(auto x:v){
               cout<<x<<" ";
           }
           cout<<endl;
            
            ans.push_back(temp);


           for(auto x:temp){
               temp.pop_back();
           }
        }
        



        




 
        


        return ans;
    }
};






