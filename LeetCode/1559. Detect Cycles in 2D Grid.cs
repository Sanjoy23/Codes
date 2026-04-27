public class Solution {
    public int[] dx = {1, -1, 0, 0};
    public int[] dy = {0, 0, 1, -1};
    public bool ContainsCycle(char[][] grid) {
        bool[][] IsVisited = new bool[grid.Length][];
        //Console.WriteLine(grid.Length);
        for(int i = 0; i < grid.Length; i++)
        {
            IsVisited[i] = new bool[grid[0].Length];
        }
        for(int i = 0; i < grid.Length; i++)
        {
            for(int j = 0; j < grid[0].Length; j++)
            {
                if(IsVisited[i][j]) continue;
                if(BFS(grid, i, j, IsVisited))
                    return true;
                //if(result == true) return true;
                
            }
        }
        return false;
    }

    public bool BFS(char[][] grid, int i, int j, bool[][] isVisited)
    {
        Queue<int[]> q = new Queue<int[]>();
        q.Enqueue(new int[]{i, j, -1, -1});
        isVisited[i][j] = true;
        while(q.Count > 0)
        {
            int[] temp = q.Dequeue();
            int curi = temp[0];
            int curj = temp[1];
            int pari = temp[2];
            int parj = temp[3];

            for(int k = 0; k < 4; k++)
            {
                int nx = curi + dx[k];
                int ny = curj + dy[k];

                if(nx >= 0 && nx < grid.Length && ny >= 0 && ny < grid[0].Length)
                {
                    
                    if(grid[nx][ny] != grid[i][j]) continue;
                    if(isVisited[nx][ny] && !(nx == pari && ny == parj)) return true;
                    if(isVisited[nx][ny]) continue;
                    
                    q.Enqueue(new int[]{nx, ny, curi, curj});
                    isVisited[nx][ny] = true;
                }
            }

        }

        return false;
    }
}