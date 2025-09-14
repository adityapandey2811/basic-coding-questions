class Solution {
    public int reversePairs(int[] nums) {
        return mergeSort(nums, 0, nums.length-1);
    }
    int mergeSort(int arr[], int l, int r) {
        int inv = 0;
        if(l >= r) return 0;
        int m = l + (r - l)/2;
        inv += mergeSort(arr,l,m);
        inv += mergeSort(arr,m+1,r);
        inv += countPairs(arr,l,m,r);
        merge(arr,l,m,r);
        return inv;
    }
    void merge(int arr[], int l, int m, int r) {
        List<Integer> list = new ArrayList<>();
        int left = l;
        int right = m+1;
        while(left <= m && right <= r) {
            if(arr[left] > arr[right]) {
                list.add(arr[right]);
                right++;
            } else {
                list.add(arr[left]);
                left++;
            }
        }
        while(left <= m) {
            list.add(arr[left]);
            left++;
        }
        while(right <= r) {
            list.add(arr[right]);
            right++;
        }
        for(int i=0;i<r-l+1;i++) {
            arr[l+i] = list.get(i);
        }
    }
    int countPairs(int arr[], int l, int m, int r) {
        int count = 0;
        int right = m+1;
        for(int i=l;i<=m;i++) {
            while(right<=r && (long)arr[i] > 2L*arr[right]) {
                right++;
            }
            count += right - m - 1;
        }
        return count;
    }
}
