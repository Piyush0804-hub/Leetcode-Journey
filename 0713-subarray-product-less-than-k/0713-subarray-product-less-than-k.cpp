class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            int prod=1;
            int ind=i;
            while(prod<k && ind<nums.size()){
                prod*=nums[ind];
                if(prod<k){
                    ans++;
                }
                ind++;
            }
        }
        return ans;
    }
};