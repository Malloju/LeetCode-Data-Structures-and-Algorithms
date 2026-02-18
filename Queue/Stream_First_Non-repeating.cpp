class Solution {
  public:
    string firstNonRepeating(string &s) {
        int n=s.length();
        string res="";
        queue<char>q;
        unordered_map<char,int>freq;
        for(auto it:s){
            freq[it]++;
            
            if(freq[it]==1){
                q.push(it);
            }
            while(!q.empty() and freq[q.front()]>1){
                q.pop();
            }
            if(q.empty())res+='#';
            else res+=q.front();
        }
        return res;
    }
};
