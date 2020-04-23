#include <bits/stdc++.h>

#include "../../library/lib.hpp"


class CLinovaAndKingdom {
public:
    void solve(istream &in, ostream &out) {

        int n, k;
        in >> n >> k;

        vector<pair<int, int>> omp;
        vector<pair<int, int>> mp;
        int onecount = 0;
        for (int i = 1; i < n; i++) {
            int u, v;
            in >> u >> v;
            if (fmin(u, v) == 1) {
                onecount++;
                omp.emplace_back(fmin(u, v), fmax(v, u));
            } else {
                mp.emplace_back(fmin(u, v), fmax(v, u));
            }
        }

        vector<int> cost;
        vector<vector<int>> vv;
        int cc = 0;
        while (cc <= onecount) {
            int s = omp[cc].second;

            int next = s;
            int cx = 0;
            int ccc = 0;
            while (true) {

                if (next == mp[cx % mp.size()].first) {
                    next = mp[cx % mp.size()].first;
                    ccc++;

                } else if (next == mp[cx % mp.size()].second) {
                    next = mp[cx % mp.size()].second;
                    ccc++;
                }

                if (cx > 2 * mp.size()) {
                    break;
                }

                cx++;
            }

            cost.push_back(ccc);
            cc++;
        }


        sort(cost.begin(), cost.end());
        reverse(cost.begin(), cost.end());


        int ans = 0;
        for (int i = 0; i < k; i++) {
            ans += cost[i];
        }

        out << ans;
    }
};
