public class Solution {
    private int[] parent;
    public int FindRoot(int x)
    {
        if(x == parent[x]) return x;
        return parent[x] = FindRoot(parent[x]);
    }
    public void Union(int x, int y)
    {
        int xSet = FindRoot(x);
        int ySet = FindRoot(y);
        parent[xSet] = ySet;
    }
    public int[] FindRedundantConnection(int[][] edges) {
        Console.WriteLine(edges.Length);
        parent = new int[edges.Length + 4];
        for(int i = 0; i < edges.Length + 4; i++) parent[i] = i;

        for(int i = 0; i < edges.Length; i++)
        {
            if(FindRoot(edges[i][0]) != FindRoot(edges[i][1]))
            {
                Union(edges[i][0], edges[i][1]);
            }
            else
            {
                return new int[]{edges[i][0], edges[i][1]};
            }
        }

        return new int[]{};
    }
}