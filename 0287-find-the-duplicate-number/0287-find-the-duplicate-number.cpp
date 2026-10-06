class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return *adjacent_find(nums.begin(), nums.end());
    }
};