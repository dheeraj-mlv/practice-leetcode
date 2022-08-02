class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted=nums;
        sort(sorted.begin(),sorted.end());
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<n && nums[i]==sorted[i]) i++;
        
        while(j>=0&&nums[j]==sorted[j]) j--;
        
        
        if(j-i+1<=0) return 0;
        
        return j-i+1;
    }
};