class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int result=0;
        int n=nums.size();

        for(int i=0; i<n; i++)
        if(nums[i]!=val){
            nums[result]=nums[i];
          result++; 
        }
        return result;   
    }
};
