class Solution { 
public:
    int missingNumber(vector<int>& nums)
    { 
    cout<<"Saumyamani_Bhardwaz_20BCS1682"<<endl;
    sort(nums.begin(),nums.end());
for(int i=0;i<nums.size();++i)
{
if(nums[i]!=i) return i;
}
return nums.size();
    }
};
