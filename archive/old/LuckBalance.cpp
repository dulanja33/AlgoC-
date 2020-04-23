#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class LuckBalance {
public:
    void solve(istream &in, ostream &out) {
        int n, k;
        in >> n >> k;

        vector<pair<int, int>> v;
        for (int i = 0; i < n; ++i) {
            int a, b;
            in >> a >> b;
            v.emplace_back(a, b);
        }

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        int sum = 0;
        for (int j = 0; j < n; ++j) {
            if (k > 0 && v[j].second == 1) {
                k--;
                sum += v[j].first;
            } else if (v[j].second == 0) {
                sum += v[j].first;
            } else if (k <= 0 && v[j].second == 1) {
                sum -= v[j].first;
            }

            // out << v[j].first << "-" << v[j].second << endl;
        }

        out << sum << endl;

    }
};
