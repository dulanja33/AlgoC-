#include <bits/stdc++.h>

#include "../library/lib.hpp"


class ACandiesAndTwoSisters {
public:
    void solve(istream &in, ostream &out) {
        int T;
        in >> T;

        while (T--) {
            ll n;
            in >> n;
            if (n % 2 != 0) {
                out << (n + 1) / 2 - 1 << endl;
            } else {
                out << n / 2 - 1 << endl;
            }
        }
    }
};
