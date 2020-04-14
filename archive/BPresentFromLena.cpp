#include <bits/stdc++.h>

#include "../library/lib.hpp"


class BPresentFromLena {
public:
    void solve(istream &in, ostream &out) {
        int n;
        in >> n;

        int imax = 2 * n + 1;

        for (int i = 0; i < imax; ++i) {
            int spread = i <= n ? i : n - (i -n);
            int p = 0;
            for (int j = 0; j < imax; ++j) {
                if (j >= (n - spread) && j <= (n + spread)) {
                    out << p ;

                    if(j < n + spread ) out << " ";

                    if (j >= n) --p;
                    else ++p;
                }else {
                    if(j < n + spread) out << "  ";
                }
            }

            out << endl;
        }

    }
};
