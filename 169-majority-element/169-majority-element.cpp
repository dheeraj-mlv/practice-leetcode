class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto x:nums){
            mpp[x]++;
        }
        
        int n=nums.size()/2;
        int ans;
        
        for(auto x:mpp){
            if(x.second>n){
                ans=x.first;
                break;
                
            }
        }
        return ans;
    }
};