using System;
using System.Collections.Generic;
public class Test
{
	public static void Main()
	{
		// your code goes here
		int tc = Convert.ToInt32(Console.ReadLine());
		while(tc-- > 0)
		{
		    int n = Convert.ToInt32(Console.ReadLine());
		    string str = Console.ReadLine();
		    int len = str.Length;
		    bool isSorted = IsSortedBinary(str);
		    if(isSorted) {
		        Console.WriteLine("Bob");
		        continue;
		    }
		    int ones = 0, zeros = 0;
		    for(int i = 0; i < len; i++)
		    {
		        if(str[i] == '0') zeros++;
		        else ones++;
		    }
		    
		    List<int> positions = new List<int>();
		    
		    for(int i = 0; i < zeros; i++)
		    {
		        if(str[i] == '1') positions.Add(i + 1);
		    }
		    
		    for(int i = zeros; i < len; i++)
		    {
		        if(str[i] == '0') positions.Add(i + 1);
		    }
		    Console.WriteLine("Alice");
		    Console.WriteLine(positions.Count);
		    for(int i = 0; i < positions.Count; i++)
		    {
		        Console.Write(positions[i] + " ");
		    }
		    Console.WriteLine();
		}
	}
	
	public static bool IsSortedBinary(string str)
	{
 
	    bool seenone = false;
	    for(int i = 0; i < str.Length; i++)
	    {
	        if(str[i] == '1')
	        {
	            seenone = true;
	        }
	        else if(str[i] == '0' && seenone)
	        {
	            //Console.WriteLine("kkkk");
	            return false;
	        }
	    }
	    
	    return true;
	}
}