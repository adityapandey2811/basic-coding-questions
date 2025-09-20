class Solution {
    public int subarraysDivByK(int[] nums, int k) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        int count = 0;
        int sum = 0;
        mp.put(0,1);
        for(int i=0;i<nums.length;i++) {
            sum += nums[i];
            int mod = ((sum%k)+k)%k;
            count += mp.getOrDefault(mod, 0);
            mp.put(mod, mp.getOrDefault(mod,0) + 1);
        }
        return count;
    }
}
