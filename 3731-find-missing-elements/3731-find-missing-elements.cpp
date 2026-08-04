class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        vector<int> arr(max + 1, 0);
        for(int i=0; i<nums.size(); i++){
            arr[nums[i]]++;
        }
        int ind=0;
        while(arr[ind]!=1){
            ind++;
        }
        vector<int> ans;
        for(int i=ind+1; i<max+1; i++){
            if(arr[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};