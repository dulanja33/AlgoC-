#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class APuzzles {
public:
    void solve(istream &in, ostream &out) {
        int n, m;
        in >> n >> m;

        vector<int> v(m);

        for (int i = 0; i < m; ++i) {
            in >> v[i];
        }


        sort(v.begin(), v.end());

        int ans = INF;

        for (int j = 0; j <= m - n; ++j) {
            ans = fmin(ans, v[j + n - 1] - v[j]);
        }


        out << ans << endl;


    }
};
