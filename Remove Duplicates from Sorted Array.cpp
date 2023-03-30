class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int result =1;
       int  n=nums.size();
        for(int i=1; i<n; i++)
        if(nums[i]!=nums[result-1]){
            nums[result]=nums[i];
            result++;
        }
        return result;
    }
};
