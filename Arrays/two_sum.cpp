//Problem: Two Sum
// Approach: Hash Map
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int id1,id2;
        for(int i=0;i<n;i++){
            int diff=target-nums[i];
            for(int j=i+1;j<n;j++){
                if(nums[j]==diff){
                    id1=i;
                    id2=j;
                }
            }
        }
        return {id1,id2};
    }
};
