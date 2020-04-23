#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class GreedyForWater {
public:
	void solve(istream& in, ostream& out) {
	    int T; in >> T;
	    while(T--){
	        int a,b;
	        in >> a >> b;
	        int arr[a];
	        for(int i=0;i<a;i++){
	            in >> arr[i];
	        }

	        sort(arr,arr+a);
	        int ans = 0;
	        int i = 0;
	        while(true){
	            b -= arr[i];
	            if(b <= 0) break;
	            i++;
	            ans++;
	            if(i >= a){
	                break;
	            }
	        }

	        out << ans << endl;
	    }

	}
};
