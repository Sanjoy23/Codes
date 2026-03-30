using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Graph
{
    public static class Recursion
    {
        public static void PrintNumbers(int numbers)
        {
            if (numbers < 0) return;
            PrintNumbers(numbers - 1);
            Console.WriteLine(numbers);
        }

        public static void PrintOddNumInRange(int A, int B)
        {
            if (A > B) return;
            if (A % 2 == 1)
            {
                PrintOddNumInRange(A + 2, B);
                Console.WriteLine(A);
            }
            else PrintOddNumInRange(A + 1, B);
        }

        public static int SummationOfArray(int[] nums, int idx)
        {
            if (idx >= nums.Length) return 0;

            return nums[idx] += SummationOfArray(nums, idx + 1);
        }

        public static string PrintStringReverse(string str)
        {
            if (str.Length == 0) return str;
            return PrintStringReverse(str.Substring(1)) + str[0];
        }
    }
}
