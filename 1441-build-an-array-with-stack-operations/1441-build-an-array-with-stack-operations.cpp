class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        stack<int> s;
        string push="Push";
        string pop="Pop";
        int n1=target.size();
        int index=0;
        for(int i=1; i<n+1; i++){
            if(index==target.size()){
            break;
        }
            s.push(i);
            ans.push_back(push);
            if(index<=n1 && s.top()!=target[index]){
                s.pop();
                ans.push_back(pop);
                
            }
            else if(s.top()==target[index]){
                index++;
            }
            
        }
        return ans;
    }
};