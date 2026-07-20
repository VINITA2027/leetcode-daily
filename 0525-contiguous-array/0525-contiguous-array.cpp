class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mpp;

        mpp[0] = -1;

        int prefix = 0;
        int longest = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                prefix += -1;
            }else{
                prefix +=1;
            }
            if(mpp.find(prefix)!=mpp.end()){
                longest = max(longest , i-mpp[prefix]);
            }else{
                mpp[prefix] = i;
            }
        }
        return longest;
    }
};