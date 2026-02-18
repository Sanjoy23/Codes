using System;

public class Test
{
	public static void Main()
	{
		// your code goes here
		int tc = Convert.ToInt32(Console.ReadLine());
		while(tc-- > 0)
		{
		    int n = Convert.ToInt32(Console.ReadLine());
		    bool one = false, six7 = false;
		    string[] parts = Console.ReadLine().Split(' ');
		    int[] nums = new int[n + 5];
		    
		    for(int i = 0; i < n; i++)
		    {
		        nums[i] = Convert.ToInt32(parts[i]);
		        //if(nums[i] == 1) one = true;
		        if(nums[i] == 67) six7 = true;
		    }
		    
		    if(six7) Console.WriteLine("YES");
		    else Console.WriteLine("NO");
		}
	}
}
