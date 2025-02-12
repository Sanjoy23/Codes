public class Solution {
    public int LengthOfLongestSubstring(string s) {
        HashSet<char> Exist = new HashSet<char>();
        int len = s.Length;
        int left = 0, right = 0;
        int ans = 0;
        for(right = 0; right < len; right++)
        {
            while(Exist.Contains(s[right]))
            {
                Exist.Remove(s[left]);
                left++;
            }
            Exist.Add(s[right]);
            ans = Math.Max(ans, right - left + 1);
        }
        return ans;
    }
}