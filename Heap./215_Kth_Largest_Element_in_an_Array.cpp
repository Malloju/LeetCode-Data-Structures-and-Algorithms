
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int>q;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             q.push(nums[i]);
//         }
//         for(int i=0;i<k-1;i++){
//             q.pop();
//         }
//         return q.top();
//     }
// };
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<int,vector<int>,greater<int>>p;
        for(int i=0;i<k;i++){
            p.push(nums[i]);
        }
        for(int i=k;i<n;i++){
            p.push(nums[i]);
            if(p.size()>k)p.pop();
        }
        return p.top();
    }
};
