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
		    int[] arr = new int[n];
		    string[] parts =  Console.ReadLine().Split(' ');
		    Dictionary<int, int> color = new Dictionary<int, int>();
		    for(int i = 0; i < n; i++) {
		        int.TryParse(parts[i], out arr[i]);
		        if(i % 2 == 0) color[arr[i]] = 1;
		        else color[arr[i]] = 0;
		    }
		    Array.Sort(arr);
		    bool flag = false;
		    for(int i = 1; i < n; i++)
		    {
		        if(color[arr[i]] == color[arr[i - 1]]) {
		            //Console.WriteLine(arr[i] + " " + arr[i -1]);
		            Console.WriteLine("No");
		            flag = true;
		            break;
		        }
		    }
		    
		    if(!flag) Console.WriteLine("Yes");  
		}
	}
}