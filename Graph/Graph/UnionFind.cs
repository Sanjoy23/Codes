namespace Graph
{
    public class UnionFind
    {
        private int[] parent;
        public UnionFind(int N)
        {
            parent = new int[N];
            for(int i = 0; i < N; i++)
            {
                parent[i] = i;
            }
        }

        public int FindRoot(int z)
        {
            if (parent[z] == z) return parent[z];
            return parent[z] = FindRoot(parent[z]);
        }

        public bool Connected(int p, int q)
        {
            return FindRoot(parent[p]) == FindRoot(parent[q]);
        }

        public void Union(int x, int y)
        {
            int xSet = FindRoot(x);
            int ySet = FindRoot(y);
            parent[xSet] = ySet;
        }
    }
}
