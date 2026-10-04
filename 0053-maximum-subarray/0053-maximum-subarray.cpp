class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxSum = nums[0];
        for(int i=0 ; i<n ; i++){
            sum=max(nums[i],sum+nums[i]);
            maxSum = max(maxSum,sum);
        }
        return maxSum;
    }
};