class Solution {
public:
    bool isPalindrome(string s) {
        string s1="";
        for(char ch:s){
            if(isalnum(ch)){
                s1.push_back(tolower(ch));
            }
        }
        int left=0;
        int right=s1.length()-1;
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