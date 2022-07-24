#define f(i,l,r) for(int i=l;i<r;i++)
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        f(i,0,n){
            nums[i]=nums[i]+(n*(nums[nums[i]]%n));
}
        
        f(i,0,n){
            nums[i]/=n;
        }
        
        return nums;
        
        
    }
};