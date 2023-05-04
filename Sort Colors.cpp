class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
    int min=INT_MIN, size=nums.size();
    for(int i=0;i<size;i++)
    {
        min=i;
        for(int j=i+1; j<size; j++)
        {
            if(nums[min]>nums[j])
            min=j;
        }
        int temp = nums[min];
            nums[min] = nums[i];
            nums[i] = temp;
    }
    }
};
