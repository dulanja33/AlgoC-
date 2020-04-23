#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class ATram {
public:
    void solve(istream &in, ostream &out) {
        int n;
        in >> n;

        int remain = 0;
        int min = 0;
        while (n--) {
            int x, y;
            in >> x >> y;
            remain = remain + y - x;
            min = fmax(min, remain);
        }

        out << min << endl;

    }
};
