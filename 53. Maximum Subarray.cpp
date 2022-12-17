class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxending = nums[0];
        int result = nums[0];
        for(int i = 1; i<nums.size(); i++){
            maxending = max(maxending + nums[i], nums[i]);
            result = max(maxending, result);
        }
        return result;
        
    }
};