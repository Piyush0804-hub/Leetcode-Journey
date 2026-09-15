class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(char ch:s){
            if(isalpha(ch)){
                st.push(ch);
            }
            else{
                st.pop();
            }
        }
        string s1;
        while(!st.empty()){
            char ch=st.top();
            s1.insert(0, 1, ch);
            st.pop();
        }
        return s1;
    }
};