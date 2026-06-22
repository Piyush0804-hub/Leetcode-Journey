class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int num=0;
        for(auto sam : m){
            if(sam.second==1){
                num=sam.first;
            }
        }
        return num;
    }
};