class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2)return 0;
        int sum=INT_MIN;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            int c=nums[i]-nums[i-1];
            sum=max(sum,c);
        }
        return sum;
    }
};