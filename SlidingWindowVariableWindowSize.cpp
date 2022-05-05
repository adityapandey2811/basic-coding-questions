#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int i = 0, j = 0, n, k, maxCount = 0, evenCount = 0;
	    cin>>n>>k;
	    vector<int> v(n);
	    for(i=0;i<n;i++){
	        cin>>v[i];
	    }
	    for(i=0;i<n;i++){
	        if(v[i] % 2 == 0){
	            evenCount++;
	        }
	        if(evenCount>k){
	            while(evenCount>k){
	                if(v[j] % 2 == 0){
	                    evenCount--;
	                }
	                j++;
	            }
	        }
	        maxCount = max(i-j+1,maxCount);
	    }
	    cout<<maxCount<<endl;
	}
	return 0;
}
