namespace LeetCode
{
    public class NumberOfIsland
    {
        public int NumIslands(char[][] grid)
        {
            int rows = grid.Length;
            int cols = grid[0].Length;
            int countLand = 0;

            int[,] isVisited = new int[rows, cols];
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++) isVisited[i, j] = 0;
            }

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    if (grid[i][j] == '1' && isVisited[i, j] == 0)
                    {
                        countLand++;
                        islandDfs(grid, i, j, isVisited);
                    }
                }
            }
            return countLand;
        }

        private void islandDfs(char[][] grid, int row, int col, int[,] isVisited)
        {
            if (row < 0 || row >= grid.Length || col < 0 || col >= grid[0].Length)
                return;
            if (isVisited[row, col] == 1 || grid[row][col] == '0') return;
            isVisited[row, col] = 1;

            islandDfs(grid, row - 1, col, isVisited); // Up
            islandDfs(grid, row + 1, col, isVisited); // Down
            islandDfs(grid, row, col - 1, isVisited); // Left
            islandDfs(grid, row, col + 1, isVisited); // Right
        }
    }
}