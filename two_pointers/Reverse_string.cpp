class Solution {
  public:
    string reverseString(string& s) {
        int n=s.length();
        int low=0;
        int high=n-1;
        while(low<high){
            char temp=s[low];
            s[low]=s[high];
            s[high]=temp;
            low++;
            high--;
        }
        return s;
    }
};
