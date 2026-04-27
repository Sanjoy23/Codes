public class Solution {
    public IList<string> TwoEditWords(string[] queries, string[] dictionary) {
        IList<string> words = new List<string>();
        foreach(var query in queries)
        {
            int cnt = 0;
            foreach(var w in dictionary)
            {
                for(int i = 0; i < w.Length; i++)
                {
                    if(w[i] != query[i]) cnt++;
                }
                if(cnt <= 2 ) {
                    words.Add(query);
                    break;
                }
                //Console.WriteLine("Count: "+ cnt);
                cnt = 0;
            }
        }

        return words;
    }
}