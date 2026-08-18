class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto it:nums2){
            mp[it]++;
        }
        for(int i=0; i<nums1.size(); i++){
            int num=nums1[i];
            for(int j=0; j<nums2.size(); j++){
                if(j==nums2.size()-1 && nums2[j]==num){
                    ans.push_back(-1);
                }
                else if(nums2[j]==num && (j!=nums2.size()-1) && nums2[j+1]>num ){
                    ans.push_back(nums2[j+1]);
                }
                else if(nums2[j]==num && nums2[j+1]<num){
                    int p=j+1;
                    while(p<nums2.size()){
                        if(p==nums2.size()-1 && nums2[p]>num){
                            ans.push_back(nums2[p]);
                            break;
                        }
                        else if(p==nums2.size()-1 && nums2[p]<num){
                            ans.push_back(-1);
                            break;
                        }
                        
                        else if(nums2[p]>num){
                            ans.push_back(nums2[p]);
                            break;
                        }                            
                       p++;
                    }
                }    
            }
        }
        return ans;
    }
};