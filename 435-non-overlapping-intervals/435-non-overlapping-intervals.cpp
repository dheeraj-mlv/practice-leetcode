class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         sort the given interval list
        sort(intervals.begin(),intervals.end());
//         now take 2 pointers previous and current 
//         now traverse on the current pointer check if its a overlapping interval or not and if it is a overlapping intervals choose the interval to be deleted based on that move the previous and current
        int prev=0;
//         this stores the no of intervals to be deleted 
        int ans=0;
        int n=intervals.size();
        
        for(int curr=1;curr<n;curr++){
//             if the intervals are overlapping then there are 2 choices to make to delete the first one or the second one 
            
//             now check that if the first one completely covers second one then delete the first one else delete the second one 
            if(intervals[curr][0]<intervals[prev][1]){
                ans++;
                
                if(intervals[curr][1]<=intervals[prev][1]){
                    prev=curr;
                }
                
            }
            else{
                prev=curr;
}
        }
        
        
        return ans;
        

    }
};