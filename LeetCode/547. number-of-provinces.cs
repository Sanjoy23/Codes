public class Solution {
    private int[] parent;
    public int FindRoot(int z)
    {
        if(parent[z] == z) return parent[z];
        return parent[z] = FindRoot(parent[z]);
    }

    public void Union(int x, int y)
    {
        int xSet = FindRoot(x);
        int ySet = FindRoot(y);
        parent[xSet] = ySet;
    }
    public int FindCircleNum(int[][] isConnected) {
        parent = new int[isConnected.Length];
        
        for(int i = 0; i < isConnected.Length; i++)
        {
            parent[i] = i;
        }
        int ans = isConnected.Length;
        for(int i = 0; i < isConnected.Length; i++)
        {
            for(int j = 0; j < isConnected[0].Length; j++){
                if(isConnected[i][j] == 1 && FindRoot(i) != FindRoot(j))
                {
                    Union(i, j);
                    ans--;
                }
            }
        }
        

        return ans;
    }
}