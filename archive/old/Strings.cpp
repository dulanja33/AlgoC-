#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class Strings {
public:
	void solve(istream& in, ostream& out) {
	    string a,b;
	    in >> a;
	    in >> b;

	    out << a.size() << " " << b.size() << endl;
	    out << a + b << endl;
	    out << b[0] + a.substr(1,a.size()) << " " << a[0] + b.substr(1,b.size()) << endl;


	}
};
