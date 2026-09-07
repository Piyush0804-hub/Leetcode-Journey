class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0;
        int r=0;
        int minlen=INT_MAX;
        int sum=0;
        while(r<nums.size()){
            sum=sum+nums[r];
            while(sum>=target){
                minlen=min(minlen, r-l+1);
                sum=sum-nums[l];
                l++;
            }
            if(sum<target){
                r++;
            }
        }
        if(minlen==INT_MAX){
            return 0;
        }
        return minlen;
    }
};