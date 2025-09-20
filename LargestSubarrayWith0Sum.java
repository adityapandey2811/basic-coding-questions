class Solution {
    public int maxLength(int[] nums) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        int sum = 0;
        int mx = 0;
        mp.put(0,-1);
        for(int i = 0;i<nums.length;i++) {
            sum += nums[i];
            mx = Math.max(mx, i-mp.getOrDefault(sum,Integer.MAX_VALUE));
            mp.putIfAbsent(sum,i);
        }
        return mx;
    }
}
