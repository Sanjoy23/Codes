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
		    int x = 1;
		    for(int i = 0; i < n; i++){
		        Console.Write(x * x + " ");
		        x++;
		    }
		    Console.WriteLine();
		}
	}
}