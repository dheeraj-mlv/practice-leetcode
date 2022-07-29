class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        
        vector<int> height(n+1);
        
        height[0]=0;
        
        for(int i=0;i<n;i++){
            height[i+1]=height[i]+gain[i];
        }
        
        
        return *max_element(height.begin(),height.end());
        
        
    }
};