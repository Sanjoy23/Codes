public class Solution {
    public int HIndex(int[] citations) {
        Array.Sort(citations);
        int hIndex = 0;
        int len = citations.Length;
        for(int i = len - 1; i >= 0; i--)
        {
            if(citations[i] >= len - i )
            {
                hIndex = len - i;
            }
            else{
                break;
            }
        }
        return hIndex;
    }
}