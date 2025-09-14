class Solution {

    void mergeSort(int arr[], int l, int r) {
        if(l >= r) return;
        int m = l + (r - l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
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
}
