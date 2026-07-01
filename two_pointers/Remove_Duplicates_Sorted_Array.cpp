class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n=arr.size();
        int place=0;
        for(int search=1;search<n;search++){
            if(arr[place]!=arr[search]){
                place++;
                arr[place]=arr[search];
            }
        }
        arr.resize(place+1);
        return arr;
    }
};
