static int compareStrings(string X, string Y){
	    string XY = X.append(Y);
	    string YX = Y.append(X);
	    return XY.compare(YX) > 0?1:0;
	}
	string printLargest(vector<string> &arr) {
	    string res;
	    sort(arr.begin(),arr.end(),compareStrings);
	    res = arr[0];
	    for(int i=1;i<arr.size();i++){
	        res = res.append(arr[i]);
	    }
	    return res;
	}
