using System;
 
public class Test
{
	public static void Main()
	{
		// your code goes here
		int tc = Convert.ToInt32(Console.ReadLine());
		while(tc-- > 0)
		{
		    string[] parts = Console.ReadLine().Split(' ');
		    int n = int.Parse(parts[0]);
		    int h = int.Parse(parts[1]);
		    int l = int.Parse(parts[2]);
		    
		    if(h > l) (h, l) = (l, h);
		    
		    string[] parts2 = Console.ReadLine().Split(' ');
		    int[] nums = new int[n + 5];
		    
		    for(int i = 0; i < n; i++)
		    {
		        nums[i] = int.Parse(parts2[i]);
		    }
		    int cnth = 0, cntl = 0;
		    
		    for(int i = 0; i < n; i++)
		    {
		        if(nums[i] <= h) cnth++;
		        if(nums[i] <= l) cntl++;
		    }
		    
		    Console.WriteLine(Math.Min(cnth, cntl / 2));
 		}
	}
}