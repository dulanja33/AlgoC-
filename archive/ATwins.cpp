#include <bits/stdc++.h>

#include "../library/lib.hpp"


class ATwins {
public:
    void solve(istream &in, ostream &out) {

        int n;
        in >> n;

        vector<int> c(n);
        int total = 0;
        for (int i = 0; i < n; ++i) {
            in >> c[i];
            total += c[i];
        }

        sort(c.begin(), c.end());
        reverse(c.begin(), c.end());

        int csum = 0;
        int ccount = 0;
        for (int j = 0; j < n; ++j) {
            if (csum > total) break;
            else {
                csum += c[j];
                total -= c[j];
                ccount++;
            }
        }

        out << ccount << endl;

    }
};
