#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class BHomework {
public:
    void solve(istream &in, ostream &out) {

        long n, m;
        in >> n >> m;

        long arr[n];
        long sum = 0;
        for (int i = 0; i < m; ++i) {
            in >> arr[i];
            sum += arr[i];
        }


        if (sum > n) {
            out << -1 << endl;
        } else {
            out << n- sum << endl;
        }

    }
};
