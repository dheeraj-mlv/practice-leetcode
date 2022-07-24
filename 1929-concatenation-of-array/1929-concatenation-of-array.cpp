#define f(i,l,r) for(int i=l;i<r;i++)
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n);
        
        f(i,0,2*n) ans[i]=nums[i%n];
        
        
        
        return ans;
    }
};