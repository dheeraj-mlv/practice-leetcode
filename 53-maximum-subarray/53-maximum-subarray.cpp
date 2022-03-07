class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum=0;

        int maxiSum=INT32_MIN;

        for(auto x:nums){
            if(sum<0){
                sum=0;
            }
            sum+=x;

            maxiSum=max(sum,maxiSum);

        }

        return maxiSum;


    //   [-2,1,-3,4,-1,2,1,-5,4] -2 1 -2 4 3 5 



        
    }
};