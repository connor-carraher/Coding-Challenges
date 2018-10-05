class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nums.erase(nums.begin()+i);
                i = 0;
            }
        }
        if(nums.size() && nums[0] == val)
        {
            nums.erase(nums.begin());
        }
        return nums.size();
    }
};