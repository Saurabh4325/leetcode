class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();

        long long total_sum = 0;
        for (int i = 0; i < n; i++) 
        {
            int mini = nums[i];
            int maxi = nums[i];

            for (int j = i + 1; j < n; j++) 
            {
                mini = min(mini, nums[j]);
                maxi = max(maxi, nums[j]);
                total_sum += (maxi - mini);
            }


        }
       return total_sum;
    }

}
;