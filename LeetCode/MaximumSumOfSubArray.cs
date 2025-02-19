namespace LeetCode // Corrected namespace declaration and name
{
    public class MaximumSumOfSubArray
    {
        public static int findMaxSumSubArray(int[] arr, int k)
        {
            int maxSum = int.MinValue;
            int sum = 0;

            for (int i = 0; i < k; i++)
            {
                sum += arr[i];
            }
            maxSum = sum;
            for (int i = k; i < arr.Length; i++)
            {
                sum = sum + arr[i] - arr[i - k];
                maxSum = Math.Max(maxSum, sum);
            }
            return maxSum;
        }
    }
}
