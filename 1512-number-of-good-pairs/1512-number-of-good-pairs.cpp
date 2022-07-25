class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int> mpp;
        
        for(auto x:nums){
            if(mpp.find(x)!=mpp.end()){
                ans+=mpp[x];
            }
            mpp[x]++;
        }
        
        
        return ans;

    }
};