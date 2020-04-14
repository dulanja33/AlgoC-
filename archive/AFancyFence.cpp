#include <bits/stdc++.h>

#include "../library/lib.hpp"


class AFancyFence {

    set<int> possibles;

public:
	void solve(istream& in, ostream& out) {

	    int cal = 0;
	    int n = 2;
	    while(cal != 179){
	        long k = (n-2) * 180;
	        if(k % n == 0){
                cal = (n-2) * 180/n;
                possibles.insert(cal);
	        }
	        n++;
	    }

	    int T; in >> T;
	    while (T--){
	        int a; in >> a;
	        if(possibles.find(a) != possibles.end()){
	            out << "YES" << endl;
	        }else{
	            out << "NO" << endl;
	        }
	    }
	}
};
