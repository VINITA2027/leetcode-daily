class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;

        mpp[0] = 1;

        int prefix = 0;
        int count = 0;

        for(int num : nums)
        {
            prefix += num;

            int need = prefix - k;

            if(mpp.count(need))
                count += mpp[need];

            mpp[prefix]++;
        }

        return count;
    }
};