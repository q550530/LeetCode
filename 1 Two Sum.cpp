class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> v = nums;
        sort(nums.begin(),nums.end());
        int start=0,end=nums.size()-1,num1,num2,ians1,ians2;
        while(start<end)
        {
            if(nums[start] + nums[end] == target)
            {
                num1 = nums[start];
                num2 = nums[end];
                break;
            }
            else if(nums[start] + nums[end]>target)
                end--;
            else
                start++;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==num1)
            {
                ians1=i;
                break;
            }
        }
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]==num2)
            {
                ians2 = i;
                break;
            }
        }
        return {ians1,ians2};
    }
};