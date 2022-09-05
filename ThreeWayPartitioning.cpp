void threeWayPartition(vector<int>& array,int a, int b){
    int i = 0, l = 0, r = array.size() - 1;
    while(i<=r){
        if(array[i] < a){
            swap(array[i], array[l]);
            l++;
        }
        else if(array[i] > b){
            swap(array[i], array[r]);
            r--;
            i--;
        }
        i++;
    }
}
