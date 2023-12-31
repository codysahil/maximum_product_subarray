	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long start = 1;
	    long long end = 1;
	    long long ans = INT_MIN;
	    for(int i = 0; i<n; i++){
	        if(start==0){
	            start = 1;
	        }
	        if(end==0){
	            end = 1;
	        }
	        start = start*arr[i];
	        end = end*arr[n-i-1];
	        
	        ans = max(ans, max(start,end));
	    }
	    return ans;
	}

