class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& v, int k) {
        int maxi=*max_element(v.begin(),v.end());
        vector<bool> ans;
        
        for(auto x:v){
            if(x+k>=maxi) ans.push_back(1);
            
            else ans.push_back(0);
}
        
        return ans;
        
    }
};