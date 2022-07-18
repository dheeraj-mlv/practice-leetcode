class Solution {
public:
    int f(int n,vector<int> &dp){
//         need to do nothing for the base cases
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 1;
//         for the remaining cases just check if it is already caluculated or not 
//         if it is caluculated just return the found value
        if(dp[n]!=-1) return dp[n];
//         caluculate and store the value
        return dp[n]=f(n-1,dp)+f(n-2,dp)+f(n-3,dp);
        
    }
    int tribonacci(int n) {
        vector<int> dp(n+1,-1);
        
        return f(n,dp);
        

        
    }
};