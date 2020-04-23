#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class BusRoutes {
public:
    void solve(istream &in, ostream &out) {
        int T;
        in >> T;
        int t = 1;
        while (t <= T) {
            out << "Case #" << t << ": ";
            t++;
            int n;
            ll d;
            in >> n >> d;

            ll arr[n];
            for (int i = 0; i < n; ++i) {
                in >> arr[i];
            }


            ll lo = 0;
            ll up = d;
            while (lo <= up) {
                ll mid = (lo + up) / 2;

                ll k = mid;
                for (int i = 0; i < n; ++i) {
                    if (k % arr[i] != 0) {
                        k += (arr[i] - k % arr[i]);
                    }
                }

                if (k <= d) {
                    lo = mid + 1;
                } else {
                    up = mid - 1;
                }
            }

            out << lo -1 << endl;


        }
    }
};
