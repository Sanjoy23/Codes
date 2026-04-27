public class NumArray {
    private int[] pfixSum;

    public NumArray(int[] nums) {
        for(int i = 1; i < nums.Length; i++)
        {
            nums[i] = nums[i] + nums[i -1];
        }
        this.pfixSum = nums;
    }
    
    public int SumRange(int left, int right) {
        if(left == 0) return pfixSum[right];
        return pfixSum[right] - pfixSum[left - 1];
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.SumRange(left,right);
 */