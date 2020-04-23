#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class ALucky7 {
public:
	void solve(istream& in, ostream& out) {

	    string s;
	    in >> s;

	    bool found = false;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i] == '7'){
                out << "Yes" << endl;
                found = true;
                break;
            }
        }

        if(!found) out << "No" << endl;


	}
};
