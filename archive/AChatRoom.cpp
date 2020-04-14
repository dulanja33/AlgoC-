#include <bits/stdc++.h>

#include "../library/lib.hpp"


class AChatRoom {
public:
	void solve(istream& in, ostream& out) {
	    char arr[1001];
	    string h = "hello";
        in >> arr;

        int j = 0;
        for (int i = 0; i < strlen(arr) && j < h.size(); ++i) {
            if(arr[i] == h[j]){
                j++;
            }
        }

        if(j == h.size()){
            out << "YES" << endl;
        }else {
            out << "NO" << endl;
        }

	}
};
