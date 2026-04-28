public class Solution {
    public int MinOperations(int[][] grid, int x) {
        int row = grid.Length;
        int col = grid[0].Length;
        int[] newArray = new int[row * col];
        int k = 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                newArray[k++] = grid[i][j];
            }
        }
        Array.Sort(newArray);
        int median = newArray[k / 2];
        int result = 0;
        for(int i = 0; i < k; i++)
        {
            if(median % x != newArray[i] % x) return -1;
            else
            {
                result += Math.Abs(median - newArray[i]) / x;
            }
        }
        return result;
    }
}