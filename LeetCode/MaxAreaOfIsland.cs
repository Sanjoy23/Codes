namespace LeetCode
{
    public class MaxAreaOfIsland
    {
        private int islandDfs(int[][] grid, int row, int col, int[,] isVisited)
        {
            if (row < 0 || row >= grid.Length || col < 0 || col >= grid[0].Length)
                return 0;
            if (isVisited[row, col] == 1 || grid[row][col] == 0) return 0;

            int area = 1;
            isVisited[row, col] = 1;

            area += islandDfs(grid, row - 1, col, isVisited); // Up
            area += islandDfs(grid, row + 1, col, isVisited); // Down
            area += islandDfs(grid, row, col - 1, isVisited); // Left
            area += islandDfs(grid, row, col + 1, isVisited); // Right
            return area;
        }
        public int MaxAreaOfIslands(int[][] grid)
        {
            int rows = grid.Length;
            int cols = grid[0].Length;
            int maxIsland = 0;

            int[,] isVisited = new int[rows, cols];
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++) isVisited[i, j] = 0;
            }

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    if (grid[i][j] == 1 && isVisited[i, j] == 0)
                    {
                        int totalArea = islandDfs(grid, i, j, isVisited);
                        maxIsland = Math.Max(maxIsland, totalArea);
                        //Console.WriteLine(totalArea.ToString() + " "+ maxIsland.ToString());
                    }
                }
            }
            return maxIsland;
        }
    }
}