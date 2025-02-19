using System;

namespace LeetCode
{
    class Program
    {
        static void Main(string[] args)
        {
            char[][] grid = new char[][]
            {
                new char[] { '1', '1', '0', '0', '0' },
                new char[] { '1', '1', '0', '0', '0' },
                new char[] { '0', '0', '1', '0', '0' },
                new char[] { '0', '0', '0', '1', '1' }
            };

            NumberOfIsland solution = new NumberOfIsland();
            int result = solution.NumIslands(grid);
            Console.WriteLine("Number of Islands: " + result);
        }
    }
}

