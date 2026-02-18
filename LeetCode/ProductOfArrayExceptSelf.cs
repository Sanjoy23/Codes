public class Solution {
    public int[] ProductExceptSelf(int[] nums) {
        int len = nums.Length;
        int cntZeros = 0; 
        int multipy = 1;
        for(int i = 0; i < len; i++)
        {
            if(nums[i] != 0) multipy *= nums[i];
            else cntZeros++;
        }
        if(cntZeros > 1) {
            for(int i = 0; i < len; i++) nums[i] = 0;
        }
        else if(cntZeros == 1)
        {
            for(int i = 0; i < len; i++)
            {
                if(nums[i] == 0) nums[i] = multipy;
                else nums[i] = 0;
            }
        }
        else{
            for(int i = 0; i < len; i++)
            {
                nums[i] = multipy / nums[i];
            }
        }

        return nums;
    }
}