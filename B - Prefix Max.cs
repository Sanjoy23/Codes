using System;
 
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
		    string[] parts = Console.ReadLine().Split(" ");
		    int mx = -1;
		    for(int i = 0; i < n; i++)
		    {
		        int.TryParse(parts[i], out nums[i]);
		        if(nums[i] > mx)
		        {
		            mx = nums[i];
		        }
		    }
		    Console.WriteLine(mx * n);
		}
 
	}
}