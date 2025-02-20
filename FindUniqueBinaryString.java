class Solution {
    public String findDifferentBinaryString(String[] nums) {
        StringBuilder sb = new StringBuilder();
        int i = 0;
        for(String cur: nums) {
            sb.append(cur.charAt(i) == '0' ? "1" : "0");
            i++;
        }
        return sb.toString();
    }
}
