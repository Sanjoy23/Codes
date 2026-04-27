public class Solution {
    public long[] Distance(int[] nums) {
        Dictionary<int, List<int>> grps = new Dictionary<int, List<int>>();
        for(int i = 0; i < nums.Length; i++){
            if(!grps.ContainsKey(nums[i])){
                grps[nums[i]] = new List<int>();
            }
            grps[nums[i]].Add(i);
        }
        
        long[] arr = new long[nums.Length];
        foreach(var group in grps.Values)
        {
            long total = 0;
            for(int i = 0; i < group.Count; i++) total += group[i];
            long pfixTotal = 0;
            for(int i = 0; i < group.Count; i++)
            {
                int idx = group[i];
                arr[idx] = total - pfixTotal * 2 + (long)idx * (2 * i - group.Count);
                pfixTotal += idx;
            } 
        }
        return arr;
    }
}