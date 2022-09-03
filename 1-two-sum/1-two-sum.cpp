#define rep(i,l,r) for(int i=l;i<r;i++)
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int x) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        rep(i,0,a.size()){
            if(mpp.find(x-a[i])!=mpp.end()){
                ans.push_back(mpp[x-a[i]]);
                ans.push_back(i);
                break;
            }
            else{
                mpp[a[i]]=i;
            }
        }    return ans;

    }
    
};