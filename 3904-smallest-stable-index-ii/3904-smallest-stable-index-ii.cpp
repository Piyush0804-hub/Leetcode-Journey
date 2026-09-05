class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        if(nums.size()==0) return -1;
        int maxx=INT_MIN;
        int minn=INT_MAX;
        vector<int> nums_suffix(nums.size());
        nums_suffix[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2; i>=0; i--){
            nums_suffix[i]=min(nums[i], nums_suffix[i+1]);
        }
        for(int i=0; i<nums.size(); i++){
            maxx=max(maxx, nums[i]);
            if((maxx-nums_suffix[i])<=k){
                return i;
            }

        }
        return -1;
    }
};