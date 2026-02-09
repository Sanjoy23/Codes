using System;
using System.Collections.Generic;
 
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
		    Dictionary<int, int> mp = new Dictionary<int, int> ();
		    string[] parts = Console.ReadLine().Split(' ');
		    int flag = 0;
		    for(int i = 0; i < n; i++)
		    {
		        int.TryParse(parts[i], out nums[i]);
		        if(nums[i] == 1) flag = 1;
		        if(!mp.ContainsKey(nums[i])) mp[nums[i]] = 0;
		        mp[nums[i]]++;
		    }
		    
		    if(mp.ContainsKey(0) && mp[0] == 1) Console.WriteLine("YES");
		    else if(mp.ContainsKey(0) && mp[0] > 1 && flag == 1) Console.WriteLine("YES");
		    else Console.WriteLine("NO");
		}
	}
}