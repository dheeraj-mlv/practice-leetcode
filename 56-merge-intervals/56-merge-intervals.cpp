class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){

        stack<vector<int>> ans;
        

        sort(intervals.begin(),intervals.end());

        for(auto x:intervals){
            if(ans.empty()){
                ans.push(x);
            }

            else{

                auto y=ans.top();

                if(y[0]<=x[0]&&x[0]<=y[1]){
                    y[1]=max(y[1],x[1]);

                    ans.pop();
                    ans.push(y);
                }
                
                else{
                    ans.push(x);
                }

            }

        }

        vector<vector<int>> answer;

        while(!ans.empty()){
            answer.push_back(ans.top());
            ans.pop();
        }

        reverse(answer.begin(),answer.end());

        return answer;

    }
};
