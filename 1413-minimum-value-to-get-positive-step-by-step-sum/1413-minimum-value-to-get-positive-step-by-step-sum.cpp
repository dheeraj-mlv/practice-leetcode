class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum=0;
        int ans=0;
        
        for(auto x:nums){
            sum+=x;
            ans=min(ans,sum);
        }
        
        return (-1*ans)+1;
        
        
        
        
    }
};