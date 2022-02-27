class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        int a,b;

        int n=nums.size();
        
        for (int i = 0; i < n; i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end()){
                a=mpp[target-nums[i]];
                b=i;
                break;
            }
            else{
                mpp[nums[i]]=i;
            }
        }

        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);

        return ans;
    }
};