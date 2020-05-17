class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        bool prev=false;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
            }
            else
            {

                if(prev && count<=k)
                {
                    return false;
                }
                if(!prev){prev=true;}
                count=1;
            }
        }
        return true;
    }
};
