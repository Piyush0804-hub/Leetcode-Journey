class Solution {
public:
    int maxProduct(int n) {
        vector<int>  arr;
        string s=to_string(n);
        for(char ch:s){
            arr.push_back(ch-'0');
        }
        sort(arr.begin(), arr.end());
        int ss=arr.size();
        int a=arr[ss-1];
        int b=arr[ss-2];
        return a*b;

    }
};