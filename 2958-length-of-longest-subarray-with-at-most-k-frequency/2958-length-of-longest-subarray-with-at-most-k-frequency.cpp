class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left=0;
        int right=0;
        unordered_map<int, int> mp;
        int maxLength=0;
        while(right!=nums.size()){
            mp[nums[right]]++;
            while (mp[nums[right]]>k) {
                mp[nums[left]]--;
                left++;
            }
            maxLength=max(maxLength, right-left+1);
            right++;
        }
        return maxLength;        
    }
};