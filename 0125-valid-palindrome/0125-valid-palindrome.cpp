class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(char ch:s){
            if(isalnum(ch)){
                char low=tolower(ch);
                s1.push_back(low);
            }
        }
        int len=s1.length();
        int left=0;
        int right=len-1;
        while(left<right){
            if(s1[left]!=s1[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;


    }
};