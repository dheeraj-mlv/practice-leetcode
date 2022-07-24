#define f(i,l,r) for(int i=l;i<r;i++)
// Naive solution is to create a new array and put numbers in it 
// Now I just need a way where I can store 2 things in the same place so I will make the array as follows
// access the numbers at the nums[nums[i]] and multiply it by n and add to this number when modulated by n we will get the original number 
// when divided by n we will get the new number

// example A=A'+kx where A'<k  
// A/k= x
// A%k=A'
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