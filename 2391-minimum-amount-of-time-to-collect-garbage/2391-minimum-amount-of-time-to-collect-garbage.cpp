class Solution {
public:
    int countchar(string s,char c){
        int count=0;

        for(auto x:s){
            if(x==c){
                count++;
            }
        }

        return count;
}

int helper(vector<string> garbage,vector<int> prefix,char c){
    int prev=0;
    int ans=0;

    for(int curr=0;curr<garbage.size();curr++){
        if(countchar(garbage[curr],c)){
            ans+=countchar(garbage[curr],c);
            if(curr-1>=0) ans+=prefix[curr-1];
            if(prev-1>=0) ans-=prefix[prev-1];

            prev=curr;
        }
    }

    return ans;
}

    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        vector<int> prefix(travel.size());
        prefix[0]=travel[0];
        for(int i=1;i<travel.size();i++) prefix[i]=prefix[i-1]+travel[i];
        
        int ans=0;
        
        ans+=helper(garbage,prefix,'G');
        ans+=helper(garbage,prefix,'P');
        ans+=helper(garbage,prefix,'M');
        
        return ans;

        
    }
};