class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int ans=0;
        int temp1=0;
        int temp2=0;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                st.push(stoi(tokens[i]));
            }
            else if(tokens[i]=="+"){
                if (st.size() < 2) return 0;
                temp1=st.top();
                st.pop();
                temp2=st.top();
                st.pop();
                ans=temp1+temp2;
                st.push(ans);
            }
            else if(tokens[i]=="-"){
                if (st.size() < 2) return 0;
                temp1=st.top();
                st.pop();
                temp2=st.top();
                st.pop();
                ans=temp2-temp1;
                st.push(ans);
            }
            else if(tokens[i]=="*"){
                if (st.size() < 2) return 0;
                temp1=st.top();
                st.pop();
                temp2=st.top();
                st.pop();
                ans=temp1*temp2;
                st.push(ans);
            }
            else if(tokens[i]=="/"){
                if (st.size() < 2) return 0;
                temp1=st.top();
                st.pop();
                temp2=st.top();
                st.pop();
                ans=temp2/temp1;
                st.push(ans);
            }
        }
        int sol=st.top();
        return sol;
    }
};
