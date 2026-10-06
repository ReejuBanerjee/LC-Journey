class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> count(100001, 0);

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i] + 50000]++;
        }

        int index = 0;
        for (int i = 0; i <= 100000; i++) {
            while (count[i] > 0) {
                nums[index] = i - 50000;
                index++;
                count[i]--;
            }
        }
        return nums;
    }
};