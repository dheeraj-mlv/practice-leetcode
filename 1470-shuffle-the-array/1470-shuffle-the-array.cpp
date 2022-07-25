#define f(i,l,r) for(int i=l;i<r;i++)
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        
        int a=0;
        int b=n;
        
        f(i,0,2*n){
            if(i%2==0) ans.push_back(nums[a++]);
            
            else ans.push_back(nums[b++]);
        }
        
        
        return ans;
        
        
        
        
    }
};