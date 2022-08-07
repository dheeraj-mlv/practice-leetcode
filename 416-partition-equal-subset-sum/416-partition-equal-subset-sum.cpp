#define f(i,l,r) for(int i=l;i<r;i++)
class Solution {
public:
    bool canPartition(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(auto x:arr) sum+=x;
        
        if(sum%2!=0) return 0;
        
        sum/=2;
        
        bool t[n+1][sum+1];
        
        f(i,0,sum+1) t[0][i]=0;
        
        f(i,0,n+1)   t[i][0]=1;
        
        f(i,1,n+1){
            f(j,1,sum+1){
                if(arr[i-1]<=j){
                    t[i][j]=t[i-1][j-arr[i-1]]||t[i-1][j];
                }
                else t[i][j]=t[i-1][j];
            }
}
        
        
        return t[n][sum];
    }
};