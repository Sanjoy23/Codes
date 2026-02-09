public class Test
{
	public static void Main()
	{
		// your code goes here
		int tc = Convert.ToInt32(Console.ReadLine());
		while(tc > 0)
		{
		    tc--;
		    int n = Convert.ToInt32(Console.ReadLine());
		    int[] nums = new int[n];
		    string[] parts = Console.ReadLine().Split(' ');
		    
		    for(int i = 0; i < n; i++)
		    {
		        int.TryParse(parts[i], out nums[i]);
		    }
		    
		    Array.Sort(nums);
		    
		    int ans = -1, cnt = 1;
		    for(int i = 1; i < n; i++)
		    {
		        if(nums[i] == nums[i - 1]) continue;
		        if(nums[i] - nums[i - 1] == 1)
		            cnt++;
		        else {
		            ans = Math.Max(ans, cnt);
		            cnt = 1;
		        }
		    }
		    
		    ans = Math.Max(ans, cnt);
		    Console.WriteLine(ans);
		}
	}
}