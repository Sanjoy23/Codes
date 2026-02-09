using System;
 
public class Test
{
	public static void Main()
	{
		// your code goes here
		int tc = Convert.ToInt32(Console.ReadLine());
		while(tc > 0)
		{
		    int n = Convert.ToInt32(Console.ReadLine());
		    if(n == 2) Console.WriteLine(2);
		    else if(n == 3) Console.WriteLine(3);
		    else if(n >= 4) Console.WriteLine(n % 2);
		    tc--;
		}
	}
}