#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class SherlockAndTheBeast {

public:
    void solve(istream &in, ostream &out) {

        int T;
        in >> T;
        while (T--) {
            int n;
            in >> n;
            if (n >= 3) {
                int k = n;
                while (k > 0) {
                    if (k % 3 == 0) {
                        break;
                    } else {
                        k -= 5;
                    }
                }

                if (k < 0) {
                    out << -1 << endl;
                    continue;
                }

                int f = n - k;

                while (k > 0) {
                    out << "5";
                    k--;
                }

                while (f > 0) {
                    out << "3";
                    f--;
                }

                out << endl;

            } else {
                out << -1 << endl;
            }
        }

    }
};
