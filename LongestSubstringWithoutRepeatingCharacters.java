class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> set = new HashSet<>();
        int mx = 0;
        int i = 0, j = 0;
        while(i<s.length()) {
            while(set.contains(s.charAt(i))){
                set.remove(s.charAt(j));
                j++;
            }
            set.add(s.charAt(i));
            mx = Math.max(i-j + 1, mx);
            i++;
        }
        return mx;
    }
}
