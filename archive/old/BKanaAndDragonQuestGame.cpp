#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class BKanaAndDragonQuestGame {
public:
    void solve(istream &in, ostream &out) {
        int T;
        in >> T;
        while (T--) {
            int x, n, m;
            in >> x >> n >> m;
            while (x > 0 && n > 0) {
                int a = x / 2 + 10;
                if (x > a) {
                    x = a;
                    n--;
                } else if (x <= a) {
                    break;
                }
            }

            while (x > 0 && m > 0) {
                int b = x - 10;
                if (x > b) {
                    x = b;
                    m--;
                }
            }


            if (x > 0 || (n < 0 || m < 0)) {
                out << "NO" << endl;
            } else {
                out << "YES" << endl;
            }


        }
    }
};
