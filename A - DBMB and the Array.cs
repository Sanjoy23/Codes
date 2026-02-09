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
		    int s = int.Parse(parts[1]);
		    int x = int.Parse(parts[2]);
		    
		    string[] parts2 = Console.ReadLine().Split(' ');
		    int[] nums = new int[n + 5];
		    int sum = 0;
		    for(int i = 0; i < n; i++)
		    {
		        nums[i] = int.Parse(parts2[i]);
		        sum += nums[i];
		    }
		    
		    if(sum > s) Console.WriteLine("NO");
		    else if(sum == s) Console.WriteLine("YES");
		    else if(sum < s)
		    {
		        int temp = s - sum;
		        if(temp % x == 0) Console.WriteLine("YES");
		        else{
		            Console.WriteLine("NO");
		        }
		    }
		    else Console.WriteLine("NO");
	    }
	}
}