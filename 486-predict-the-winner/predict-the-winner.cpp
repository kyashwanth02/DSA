class Solution {
public:
    int predict(vector<int>&nums,int start,int end)
    {
        if(start==end)
        return nums[start];
    int predictatfirst=nums[start]-predict(nums,start+1,end);
    int predictatend=nums[end]-predict(nums,start,end-1);
    return max(predictatfirst,predictatend);
    }
    bool predictTheWinner(vector<int>& nums) {
        return predict(nums,0,nums.size()-1) >=0;
    }
};