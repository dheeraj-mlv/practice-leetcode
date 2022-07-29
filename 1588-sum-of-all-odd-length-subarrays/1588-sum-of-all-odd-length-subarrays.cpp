#define f(i,l,r) for(int i=l;i<r;i++)
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector<int> pre(n);
        
        f(i,0,n){
            if(i==0) pre[i]=arr[i];
            
            else pre[i]=pre[i-1]+arr[i];
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j+=2){
                int r=j;
                int l=i;
                
                if(l-1>=0) ans+=pre[r]-pre[l-1];
                else ans+=pre[r];
            }
        }
        
        return ans;
    }
    
    
};