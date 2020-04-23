#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class CCircleOfMonsters {
public:
    void solve(istream &in, ostream &out) {
        int T;
        cin >> T;
        while (--T) {
            int n;
            cin >> n;
            vector<pair<ll, ll>> li(n);

            for (int i = 0; i < n; ++i) {
                int a,b;
                cin >> a >> b;
                li[i] = make_pair(a,b);
            }

            ll min = li[0].first;
            for (int j = 1; j < n; ++j) {

            }


        }

    }
};
