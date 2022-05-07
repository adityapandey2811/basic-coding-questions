//Modified Binary Search Algorithm
int search(int a[], int l, int h, int key){
        int mid;
        while(l<=h){
            mid = (l+h)/2;
            if(key == a[mid])
                return mid;
            if(a[mid]>a[l]){
                if((key>=a[l]) && key<a[mid])
                    h = mid-1;
                else
                    l = mid+1;
            }
            else{
                if(key>a[mid] && key<=a[h])
                    l = mid+1;
                else
                    h = mid-1;
            }
        }
        return -1;
    }
