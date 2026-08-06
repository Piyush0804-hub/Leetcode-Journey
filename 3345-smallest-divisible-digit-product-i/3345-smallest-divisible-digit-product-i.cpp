class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n; i<101; i++){
            int dup=i;
            vector<int> ans;
            while(dup>0){
                int a=dup%10;
                dup/=10;
                ans.push_back(a);
            }
            int n2=1;
            for(int j=0; j<ans.size(); j++){
                n2*=ans[j];
            }
            
            if(n2%t==0){
                string s="";
                for(int k=ans.size()-1; k>=0; k--){
                    s.append(to_string(ans[k]));
                }
                return stoi(s);
            }

        }
        return 0;
    }

};