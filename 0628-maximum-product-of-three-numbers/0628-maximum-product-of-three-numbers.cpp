class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int choice1=nums[0]*nums[1]*nums[n-1];
        int choice2=nums[n-1]*nums[n-2]*nums[n-3];
        if(choice1>=choice2){
            return choice1;
        }
        return choice2;
    }
};