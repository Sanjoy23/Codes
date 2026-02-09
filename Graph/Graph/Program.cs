using System;

namespace Graph
{
    public class Program
    {
        static void Main(string[] args)
        {
            //while (true)
            //{
            //    string line = Console.ReadLine();
            //    if (line == "0" || string.IsNullOrEmpty(line)) break;
            //    int n = Convert.ToInt32(line);
            //    int e = Convert.ToInt32(Console.ReadLine());

            //    List<int>[] adj = new List<int>[n];
            //    for (int i = 0; i < n; i++) adj[i] = new List<int>();

            //    for (int i = 0; i < e; i++)
            //    {
            //        string[] edge = Console.ReadLine().Split(' ');
            //        int u = Convert.ToInt32(edge[0]);
            //        int v = Convert.ToInt32(edge[1]);
            //        adj[u].Add(v);
            //        adj[v].Add(u);
            //    }

            //    bool Bicolorable = isBicolorable(n, adj);
            //    if (Bicolorable) {
            //        Console.WriteLine("BiColorable.");
            //    }
            //    else
            //    {
            //        Console.WriteLine("Not BiColorable.");
            //    }

            //}

            string s1 = "Five Star";
            string s2 = "FIVE STAR";
            int c = s2.CompareTo(s1);
            Console.WriteLine(c);

            String str = "She sells sea shells on the sea-shore";
            int i, j;
            i = str.IndexOf("s");
            j = str.IndexOf("s", i + 1);

            foreach (var k in new Range(5, 3))
            {
                Console.WriteLine(k); // 5, 6, 7
            }
            byte[] buffer = new byte[] { 65 };
            Span<byte> span = buffer.AsSpan(0, 10);
        }

        public static bool isBicolorable(int n, List<int>[] adj)
        {
            Queue<int> q = new Queue<int>();
            q.Enqueue(0);

            int[] colors = new int[n];
            colors[0] = 1;
            while (q.Count > 0)
            {
                int u = q.Dequeue();
                foreach (var v in adj[u])
                {
                    if (colors[v] == 0)
                    {
                        colors[v] = (colors[u] == 1) ? 2 : 1;
                        q.Enqueue(v);
                    }
                    else if (colors[u] == colors[v])
                    {
                        return false;
                    }

                }
            }
            return true;
        }
    }
}
