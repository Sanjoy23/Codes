public class Solution {
    public void dfs(int[][] grid, int i, int j, int row, int col)
    {
        if(i < 0 || j < 0 || i >= row || j >= col || grid[i][j] != 1) return;
        grid[i][j] = 5;
        dfs(grid, i + 1, j, row, col);
        dfs(grid, i - 1, j, row, col);
        dfs(grid, i, j - 1, row, col);
        dfs(grid, i, j + 1, row, col);

    }
    public int NumEnclaves(int[][] grid) {
        int row = grid.Length;
        int col = grid[0].Length;

        for(int i = 0; i < row; i++)
        {
            if(grid[i][0] == 1)dfs(grid, i, 0, row, col);
            if(grid[i][col - 1] == 1)dfs(grid, i, col - 1, row, col);
        }
        for(int i = 0; i < col; i++)
        {
            if(grid[0][i] == 1)dfs(grid, 0, i, row, col);
            if(grid[row - 1][i] == 1)dfs(grid, row - 1, i, row, col);
        }
        int ans = 0;
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(grid[i][j] == 1) ans++;
            }
        }

        return ans;
    }
}